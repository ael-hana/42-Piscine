/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:34:45 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:37:08 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy (char ***factory)
{
	int i;
	int j;

	i = 0;
	if (factory)
	{
		while (factory[i])
		{
			j = 0;
			while (factory[i][j])
			{
				free(factory[i][j]);
				j++;
			}
			free(factory[i]);
			i++;
		}
		free(factory);
	}
}
