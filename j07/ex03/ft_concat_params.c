/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 13:14:04 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/07 16:50:19 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char		*replace_zero_line(char *tab, int argc, char **argv)
{
	int		y;
	int		size;
	int		i;

	i = 0;
	y = 1;
	size = 0;
	while (argc != y)
	{
		while (argv[y][i])
		{
			tab[size] = argv[y][i];
			i += 1;
			size += 1;
		}
		tab[size] = '\n';
		y += 1;
		size += 1;
		i = 0;
	}
	return (tab);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		y;
	int		i;
	int		size;
	char	*tab;

	i = 0;
	y = 1;
	while (argc != y)
	{
		while (argv[y][i])
			i += 1;
		size = size + 1 + i;
		i = 0;
		y += 1;
	}
	tab = (char *)malloc(sizeof(char) * (size));
	return (replace_zero_line(tab, argc, argv));
}
