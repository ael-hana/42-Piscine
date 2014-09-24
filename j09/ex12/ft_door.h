/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:36:44 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:36:50 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCESS 0

typedef int		t_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

#endif
