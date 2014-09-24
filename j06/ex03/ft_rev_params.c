/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:17:09 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/07 16:46:24 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	argc -= 1;
	while (argc)
	{
		ft_putchar(argv[argc][i]);
		i += 1;
		if (argv[argc][i] == '\0')
		{
			argc -= 1;
			ft_putchar('\n');
			i = 0;
		}
	}
	return (0);
}
