/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 16:14:29 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/01 23:03:33 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_three(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void ft_run_print_comb(char chr1, char chr2, char chr3)
{
	while (chr1 < '7')
	{
		if (chr2 == '8')
		{
			chr1 += 1;
			chr2 = '0';
			chr3 = '0';
		}
		if (chr3 > '9')
		{
			chr3 = '0';
			chr2 += 1;
		}
		if (chr1 >= chr2)
			chr2 = chr1 + 1;
		if (chr2 >= chr3)
			chr3 = chr2 + 1;
		ft_print_three(chr1, chr2, chr3);
		if (chr1 != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		chr3++;
	}
}

void ft_print_comb(void)
{
	ft_run_print_comb('0', '0', '0');
}
