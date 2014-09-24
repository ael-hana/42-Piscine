/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:36:27 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:36:56 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_AUSTIN_POWERS 42
# include <string.h>

typedef	struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	int			profession;
}				t_perso;

#endif
