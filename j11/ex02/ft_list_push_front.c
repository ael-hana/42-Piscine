/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 11:05:47 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 11:15:46 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *struc;

	struc = ft_create_elem(data);
	struc->next = *(begin_list);
	*(begin_list) = struc;
}
