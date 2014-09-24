/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 17:00:34 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 12:34:53 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_run_prime(int nb, int num)
{
	if (!(nb % num) && num == nb)
		return (1);
	if (num < nb && (nb % num))
		return (ft_run_prime(nb, num + 1));
	return (0);
}

int ft_is_prime(int nb)
{
	return (ft_run_prime(nb, 2));
}
