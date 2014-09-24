/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 14:00:16 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/21 07:49:25 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

char		**init_tab(t_env *e)
{
	if (!(e->tab = (char **)malloc(sizeof(char*) * (e->width + 1))))
		return (NULL);
	e->tab[e->width] = NULL;
	return (e->tab);
}

int			tab_bool(t_env *e)
{
	int i;
	int j;

	i = 0;
	while (i < e->length)
	{
		j = 0;
		while (j < e->width)
		{
			if (e->tab[i][j] == e->empty)
				e->tab[i][j] = 0;
			else if (e->tab[i][j] == e->obs)
				e->tab[i][j] = 1;
			else
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int			other_test(char *str, t_env *e)
{
	int		i;
	int		count;

	if (ft_line_one(str, e))
		return (1);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count += 1;
		i += 1;
	}
	if (count != (e->width + 1))
		return (1);
	return (0);
}

char		ft_check_chr(t_env *e)
{
	char	**tab;
	int		i;
	int		j;

	tab = e->tab;
	j = 0;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			if (tab[j][i] != e->empty && tab[j][i] != e->obs
					&& tab[j][i] != '\n')
				return (1);
			i += 1;
		}
		j += 1;
	}
	return (0);
}
