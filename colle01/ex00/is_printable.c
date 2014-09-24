/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_printable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 14:40:27 by cfernand          #+#    #+#             */
/*   Updated: 2014/08/11 11:08:34 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int		line(char c, char **grille, int y)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grille[y][i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		column(char c, char **grille, int x)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grille[j][x] == c)
			return (0);
		j++;
	}
	return (1);
}

int		block(char c, char **grille, int y, int x)
{
	int i;
	int j;

	x = 3 * (x / 3);
	y = 3 * (y / 3);
	j = y;
	while (j < (y + 3))
	{
		i = x;
		while (i < (x + 3))
		{
			if (grille[j][i] == c)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

char	ft_backtracking_rev(char **tab, int y, int x, char num)
{
	if (x > 8)
	{
		x = 0;
		y += 1;
	}
	if (y > 8)
		return (1);
	if (tab[y][x] != '.')
		return (ft_backtracking_rev(tab, y, (x + 1), '9'));
	while (num > '0')
	{
		if (is_printable(num, tab, y, x))
		{
			tab[y][x] = num;
			if (ft_backtracking_rev(tab, y, (x + 1), '9'))
				return (1);
			tab[y][x] = '.';
		}
		num -= 1;
	}
	return (0);
}

int		is_printable(char c, char **g, int y, int x)
{
	return (line(c, g, y) && column(c, g, x) && block(c, g, y, x));
}
