/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 16:44:15 by cfernand          #+#    #+#             */
/*   Updated: 2014/08/11 11:08:32 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "proto.h"

char	ft_backtracking(char **tab, int y, int x, char num)
{
	if (x > 8)
	{
		x = 0;
		y += 1;
	}
	if (y > 8)
		return (1);
	if (tab[y][x] != '.')
		return (ft_backtracking(tab, y, (x + 1), '1'));
	while (num <= '9')
	{
		if (is_printable(num, tab, y, x))
		{
			tab[y][x] = num;
			if (ft_backtracking(tab, y, (x + 1), '1'))
				return (1);
			tab[y][x] = '.';
		}
		num += 1;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

char	**tab_modif(int argc, char **argv)
{
	char	**ptr;
	int		i;
	int		x;
	int		y;

	x = 1;
	y = 0;
	ptr = (char **)malloc(sizeof(char *) * (argc - 1));
	while (x < argc && ptr != NULL)
	{
		i = 0;
		ptr[y] = (char *)malloc(sizeof(char) * (ft_strlen(argv[x]) + 1));
		if (ptr[y] == NULL)
			return (NULL);
		while (argv[x][i])
		{
			ptr[y][i] = argv[x][i];
			i += 1;
		}
		ptr[y][i] = '\0';
		x += 1;
		y += 1;
	}
	return (ptr);
}

int		check_params(int argc, char **argv)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	if (argc != 10)
		return (1);
	while (x < argc)
	{
		while (argv[x][i])
		{
			if ((argv[x][i] > '9' || argv[x][i] < '0') && argv[x][i] != '.')
				return (1);
			i += 1;
		}
		if (i != 9)
			return (1);
		i = 0;
		x += 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		val;
	char	**grille;
	char	**forprint;

	if (check_params(argc, argv))
		return (write(1, "Erreur\n", 7));
	grille = tab_modif(argc, argv);
	if (!ft_backtracking(grille, 0, 0, '1'))
		return (write(1, "Erreur\n", 7));
	forprint = tab_modif(argc, argv);
	ft_backtracking_rev(forprint, 0, 0, '9');
	val = 0;
	while (val < 9)
	{
		if (match_tab(forprint[val], grille[val]))
			return (write(1, "Erreur\n", 7));
		val += 1;
	}
	ft_print_grid(grille);
	free(grille);
	return (0);
}
