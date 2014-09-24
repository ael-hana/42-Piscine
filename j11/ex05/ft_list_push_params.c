/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 12:22:39 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/13 14:22:31 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*ptr;
	t_list	*save;

	i = 1;
	if (ac > 1)
	{
		ptr = ft_create_elem((void *)av[i]);
		save = ptr;
	}
	ac -= 1;
	while (ac > i)
	{
		ptr->next = ft_create_elem((void *)av[i]);
		ptr = ptr->next;
		i += 1;
	}
	return (save);
}
