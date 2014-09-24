/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 14:22:55 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 21:06:07 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void *btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	if (root->left)
		btree_search_item(root->left, applyf);
	applyf(root->item);
	if (root->right)
		btree_apply_infix(root, applyf);
}
