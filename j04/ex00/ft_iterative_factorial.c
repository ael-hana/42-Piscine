/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:14:52 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 17:08:06 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;

	num = nb;
	if (nb <= 0)
		return (0);
	while (num > 1)
	{
		nb = nb * (nb - 1);
		num -= 1;
	}
	return (nb);
}
