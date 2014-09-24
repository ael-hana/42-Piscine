/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:36:35 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:36:53 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (1);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	if (door->state)
		return (0);
	return (1);
}

t_bool	open_door (t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (1);
}
