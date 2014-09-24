/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 23:05:50 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/03 23:20:49 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int stock;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > (tab[i + 1]))
		{
			stock = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = stock;
			i = 0;
		}
		else
			i += 1;
	}
}
