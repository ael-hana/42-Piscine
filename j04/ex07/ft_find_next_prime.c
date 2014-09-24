/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 18:27:44 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 12:31:11 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_run_first(int nb, int num)
{
	if (!(nb % num) && num == nb)
		return (1);
	if ((num < nb) && (nb % num))
		return (ft_run_first(nb, num + 1));
	return (0);
}

int ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (!(ft_run_first(nb, 2)))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
