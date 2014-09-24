/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:36:01 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:37:05 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_collatz_conjecture(unsigned int base)
{
	if (base <= 1)
		return (0);
	else if (base % 2 == 0)
		return (1 + (ft_collatz_conjecture(base / 2)));
	return (1 + (ft_collatz_conjecture((base * 3) + 1)));
}
