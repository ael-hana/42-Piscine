/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 11:29:42 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/21 07:48:05 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			ft_len(char *str)
{
	int i;

	i = 0;
	while (str != NULL && str[i] != '\0')
		i++;
	return (i);
}

char		*strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*str_all;

	str_all = (char *)malloc(sizeof(char) * (ft_len(str1) + ft_len(str2) + 1));
	if (str_all == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str1 && str1[i])
	{
		str_all[i] = str1[i];
		i++;
	}
	while (str2 && str2[j])
	{
		str_all[i + j] = str2[j];
		j++;
	}
	str_all[i + j] = '\0';
	return (str_all);
}

char		*ft_read_stdin(void)
{
	char	*str;
	char	buf[BUF_SIZE + 1];
	int		ret;

	str = NULL;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		if (buf[ret] == '\0')
			return (strjoin(str, buf));
		buf[ret] = '\0';
		str = strjoin(str, buf);
	}
	return (str);
}
