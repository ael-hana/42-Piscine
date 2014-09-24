/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/21 01:56:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/21 08:40:59 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

char		*ft_concact_str(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		write(1, "ici\n", 4);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i += 1;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j += 1;
	}
	str[i + j] = '\0';
	return (str);
}

char		*ft_read_file(char *av)
{
	char	*str;
	char	*old;
	int		fd;
	int		i;

	fd = open(av, O_RDONLY);
	old = "\0";
	if (fd == -1)
		ft_error();
		return (NULL);
	str = (char *)malloc(sizeof(char) * BUF_SIZE);
	while ((i = read(fd, str, (BUF_SIZE - 1))) > 0)
	{
		str[i] = '\0';
		old = ft_concact_str(old, str);
		str = (char *)malloc(sizeof(char) * (BUF_SIZE));
	}
	if (str)
		free (str);
	if (i == -1 || !str)
		return (NULL);
	return (old);
}
