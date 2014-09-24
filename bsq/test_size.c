/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 17:30:40 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/21 07:57:49 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			ft_true_map(char *str, t_env *e)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i])
		i++;
	while ((str[i]) && (j < e->width))
	{
		k = 0;
		while (str[i] && str[i] != '\n')
		{
			k++;
			i += 1;
		}
		if (!str[i] || k != e->length)
			return (0);
		j++;
		i++;
	}
	return (1);
}

int			ft_line_one(char *str, t_env *e)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while (str[i])
		i += 1;
	if (i < 5)
		return (-1);
	i = 0;
	while (str[i + 3] && str[i] > 47 && str[i] < 58 && str[i + 3] != '\n')
	{
		num *= 10;
		num += str[i] - '0';
		i += 1;
	}
	if (!num)
		return (-1);
	e->width = num;
	e->empty = str[i];
	e->obs = str[i + 1];
	e->fill = str[i + 2];
	return (0);
}

int			test_size(char *str, t_env *e)
{
	int		i;

	i = 0;
	e->length = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i])
		i++;
	while (str[i] != '\n' && str[i])
	{
		i++;
		e->length++;
	}
	if (ft_true_map(str, e))
		return (0);
	return (1);
}

char		**create_tab(char *str, t_env *e, char **tab)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i += 1;
	if (str[i] != '\0')
		i += 1;
	j = 0;
	while (j < e->width)
	{
		if (!(tab[j] = (char *)malloc(sizeof(char) * (e->length + 2))))
			return (NULL);
		count = 0;
		while (count < (e->length + 1))
		{
			tab[j][count] = str[i];
			count++;
			i += 1;
		}
		tab[j][count] = '\0';
		j += 1;
	}
	return (tab);
}
