/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 14:24:11 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/13 16:18:34 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *save;
	t_list *tmp2;

	save = *begin_list;
	if (!*begin_list || !(*begin_list)->next)
		return ;
	tmp = save->next;
	tmp2 = tmp->next;
	save->next = NULL;
	tmp->next = save;
	while (tmp2)
	{
		save = tmp;
		tmp = tmp2;
		tmp2 = tmp->next;
		tmp->next = save;
	}
	*begin_list = tmp;
}
