/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 17:48:59 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/01 23:05:00 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_two_num(char q, char w)
{
	ft_putchar((q / 10) + '0');
	ft_putchar((q % 10) + '0');
	ft_putchar(' ');
	ft_putchar((w / 10) + '0');
	ft_putchar((w % 10) + '0');
	ft_putchar(',');
	if (q != 98)
		ft_putchar(' ');
}

void ft_print_comb2(void)
{
	char x;
	char y;

	x = 0;
	y = 1;
	while (x < 98)
	{
		if (y == 100)
		{
			x += 1;
			y = 0;
		}
		if (x >= y)
			y = x + 1;
		ft_print_two_num(x, y);
		y += 1;
	}
}
