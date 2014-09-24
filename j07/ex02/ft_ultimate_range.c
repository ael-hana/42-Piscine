/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 12:27:33 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/08 01:00:11 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		range[0][i] = min;
		min += 1;
	}
	return (size);
}
