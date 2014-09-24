/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 17:16:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 15:54:25 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_position_str(char *str)
{
	while (*str == ' ' || *str == '	' || *str == '\n')
		str += 1;
	return (str);
}

int			ft_position_index(char *str, int x)
{
	int		i;

	if (x == -1)
	{
		i = 0;
		while (str[i] && str[i] != ' ' && str[i] != '	' && str[i] != '\n')
			i += 1;
		return (i + 1);
	}
	while (str[x] == ' ' || str[x] == '	' || str[x] == '\n')
		x += 1;
	return (x);
}

int			ft_calcul_word(char *str)
{
	int		i;
	int		num;

	num = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		{
			num += 1;
			while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
				i += 1;
		}
		else
			i += 1;
	}
	if (str[i - 1] == ' ' || str[i - 1] == '	' || str[i - 1] == '\n')
		return (num - 1);
	return (num);
}

void		ft_init_var(int *x, int *i, int *y)
{
	*x = 0;
	*y = 0;
	*i = 0;
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		x;
	int		y;
	char	**tab;

	str = ft_position_str(str);
	tab = (char **)malloc(sizeof(char*) * ft_calcul_word(str) + 1);
	tab[ft_calcul_word(str)] = 0;
	ft_init_var(&x, &i, &y);
	while (i < ft_calcul_word(str))
	{
		tab[i] = (char*)malloc(sizeof(char) * (ft_position_index(&str[i], -1)));
		while (str[x] && str[x] != ' ' && str[x] != '	' && str[x] != '\n')
		{
			tab[i][y] = str[x];
			x += 1;
			y += 1;
		}
		tab[i][y] = '\0';
		i = i + 1;
		y = 0;
		x = ft_position_index(str, x);
	}
	return (tab);
}
