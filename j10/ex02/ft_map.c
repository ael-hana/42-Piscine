/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/11 19:05:31 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/11 19:12:52 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * (length));
	if (array == NULL)
		return (NULL);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i += 1;
	}
	return (array);
}
