/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/08 09:19:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/08 09:29:04 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (tab[x] != 0)
	{
		while (tab[x][i])
		{
			ft_putchar(tab[x][i]);
			i += 1;
		}
		ft_putchar('\n');
		i = 0;
		x += 1;
	}
}
