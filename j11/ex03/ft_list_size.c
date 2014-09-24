/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 11:17:02 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 11:41:08 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int		i;

	i = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		i += 1;
	}
	return (i);
}
