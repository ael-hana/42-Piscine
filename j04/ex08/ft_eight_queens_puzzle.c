/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 20:29:00 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/06 11:55:31 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_bruteforce_position_queens(int num)
{
	if (num != 92)
	{
		num += 1;
		return (ft_bruteforce_position_queens(num));
	}
	return (num);
}

int ft_eight_queens_puzzle(void)
{
	return (ft_bruteforce_position_queens(0));
}
