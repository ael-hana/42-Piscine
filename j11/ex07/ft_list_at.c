/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 14:08:03 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/13 14:21:38 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if ((begin_list) == NULL || nbr == 0)
		return (NULL);
	if (nbr == 1)
		return (begin_list);
	while (nbr > 1)
	{
		if ((begin_list->next) == NULL)
			return (NULL);
		begin_list = begin_list->next;
		nbr -= 1;
	}
	return (begin_list);
}
