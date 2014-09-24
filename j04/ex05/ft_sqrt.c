/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 14:54:06 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 12:33:21 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int find_square_root(int num, int nb)
{
	if ((num * num) == nb)
		return (num);
	if (num < nb)
		return (find_square_root((num + 1), nb));
	else
		return (0);
}

int ft_sqrt(int nb)
{
	return (find_square_root(1, nb));
}
