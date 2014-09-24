/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 14:36:44 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/16 17:42:00 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *tmp;

	tmp = *root;
	if (!root)
		return ;
	if (!*root)
		*root = btree_create_node(item);
	if (!(*root)->right && cmpf(tmp->item, item) >= 0)
	{
		tmp->right = btree_create_node(item);
		return ;
	}
	else if (!(*root)->left && cmpf(tmp->item, item) < 0)
	{
		tmp->left = btree_create_node(item);
		return ;
	}
	else if (cmpf(tmp->item, item) < 0)
	{
		tmp = tmp->left;
		btree_insert_data(&tmp, item, cmpf);
	}
	else if (cmpf(tmp->item, item) >= 0)
	{
		tmp = tmp->right;
		btree_insert_data(&tmp, item, cmpf);
	}
}
