/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 11:20:59 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 15:53:53 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (&str[0]);
}

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

struct s_strock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*ptr;
	int					i;

	ptr = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	ptr[ac].str = 0;
	while (ac > i)
	{
		ptr[i].size_params = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		ptr[i].tab = ft_split_whitespaces(av[i]);
		i += 1;
	}
	return (ptr);
}
