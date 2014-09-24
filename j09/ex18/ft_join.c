/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:38:46 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:39:33 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char	*tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		size;
	int		sepa;
	int		j;

	j = 0;
	i = 0;
	while (tab[i])
		size += ft_strlen(tab[i++]);
	sepa = ft_strlen(sep);
	str = (char *)malloc(sizeof(char) * (size + ((i - 1) * sepa)) + 1);
	i = 0;
	while (tab[i] && str)
	{
		size = 0;
		while (tab[i][size])
			str[j++] = tab[i][size++];
		sepa = 0;
		while (sep[sepa] && tab[i + 1])
			str[j++] = sep[sepa++];
		i++;
	}
	str[j] = '\0';
	return (str);
}
