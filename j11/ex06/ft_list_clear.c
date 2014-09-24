/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 13:32:57 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/13 14:02:29 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while ((*begin_list)->next)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		(*begin_list) = tmp;
	}
}
