/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 19:41:20 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/03 15:02:59 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putnbr(int)
void ft_putchar(char c);
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int div;

	div = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (nb / div)
		div *= 10;
	div /= 10;
	while (div != 1)
	{
		ft_putchar(((nb / div) % 10) + '0');
		div /= 10;
	}
	ft_putchar((nb % 10) + '0');
}
