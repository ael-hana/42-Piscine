/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/31 12:49:18 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/01 22:54:59 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		ft_putchar(x);
		x -= 1;
	}
}
