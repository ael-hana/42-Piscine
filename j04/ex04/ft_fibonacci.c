/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 11:00:28 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/04 14:51:41 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci_n(int index, int a, int b)
{
	if (index)
		return (ft_fibonacci_n((index - 1), b, (a + b)));
	return (a);
}

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (1 == index || index == 2)
		return (1);
	return (ft_fibonacci_n(index, 0, 1));
}
