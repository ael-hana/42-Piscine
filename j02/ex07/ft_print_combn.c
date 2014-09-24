/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 21:49:41 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/01 23:27:29 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char b)
{
	write(1, &b, 1);
}

void ft_print_combn(int n)
{
	int num;
	int div;
	int cpdiv;

	num = 1000000000;
	div = 1;
	if (0 < n < 10)
		return;
	while (n)
	{
		div *= 10;
		n--;
	}
	cpdiv = div / 10;
	div = 10;
	while (cpdiv >= div)
	{
		if (((num / (div / 10)) % 10) < ((num / div) % 10))
		{
			
		}
		num++;
		div *= 10;
	}
}

int main()
{
	ft_print_combn(x);
	return (0);
}
