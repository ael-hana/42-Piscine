/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 14:01:11 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/16 21:33:05 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	tmp->item = item;
	tmp->left = 0;
	tmp->right = 0;
	return (tmp);
}
