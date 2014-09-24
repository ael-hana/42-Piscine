/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:17:09 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/07 13:25:40 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int		i;
	int		y;

	y = 1;
	i = 0;
	while (argc != y)
	{
		ft_putchar(argv[y][i]);
		i += 1;
		if (argv[y][i] == '\0')
		{
			y += 1;
			ft_putchar('\n');
			i = 0;
		}
	}
	return (0);
}
