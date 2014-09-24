/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/21 02:15:58 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/21 09:11:21 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			ft_position(int i, int j, t_env *e)
{
	int val;

	val = e->tab[i - 1][j - 1];
	if (e->tab[i][j - 1] < val)
		val = e->tab[i][j - 1];
	if (e->tab[i - 1][j] < val)
		val = e->tab[i - 1][j];
	if (val < 0)
		val = 0;
	val++;
	return (val);
}

int			ft_number(int i, int j, t_env *e)
{
	int val;

	val = 1;
	if (e->tab[i][j] == e->obs)
	{
		e->tab[i][j] = -42;
	}
	else if ((e->tab[i][j] == e->empty) && (i == 0 || j == 0))
		e->tab[i][j] = 1;
	else if (e->tab[i][j] == e->empty)
	{
		val = ft_position(i, j, e);
		e->tab[i][j] = val;
	}
	else
		return (1);
	if (val > e->max)
	{
		e->max = val;
		e->pos_i = i;
		e->pos_j = j;
	}
	return (0);
}

void		rewrite_map(t_env *e)
{
	int i;
	int j;

	i = 0;
	while (i < e->width)
	{
		j = 0;
		while (j < e->length)
		{
			if ((i > (e->pos_i - e->max) && (i <= e->pos_i)) &&
					(j > (e->pos_j - e->max) && (j <= e->pos_j)))
				ft_putchar(e->fill);
			else if (e->tab[i][j] == -42)
				ft_putchar(e->obs);
			else
				ft_putchar(e->empty);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int			replace_map(t_env *e)
{
	int i;
	int j;

	i = 0;
	e->max = 0;
	while (i < e->width)
	{
		j = 0;
		while (j < (e->length))
		{
			if (ft_number(i, j, e))
				return (ft_error());
			j++;
		}
		i++;
	}
	rewrite_map(e);
	return (0);
}

/* POUR CREER UNE STR SANS CONNAITRE SA TAILLE D'ORIGINE
char		*ft_create_str(void)
{
	char	*str;
	char	*tmp;
	char	buf[BUF_SIZE + 1];
	int		ret;

	str = NULL;
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		but[ret] = '\0';
		tmp = str;
		str = ft_strjoin(tmp, buf);
		if (tmp)
			free(tmp);
	}
	return (str);
}*/
