/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 10:34:16 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 12:33:01 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	if (power > 0)
	{
		power -= 1;
		while (power)
		{
			power -= 1;
			nb *= nb;
		}
		return (nb);
	}
	return (0);
}
