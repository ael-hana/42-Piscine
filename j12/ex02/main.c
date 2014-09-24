/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 22:31:12 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/14 22:31:16 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void	ft_putstr(int err, char *str)
{
	while (*str)
		write(err, str++, 1);
}

void	ft_print_filename(char **av, int stop, int ac)
{
	if (ac > 4)
	{
		ft_putstr(1, "==> ");
		ft_putstr(1, av[stop]);
		ft_putstr(1, " <==\n");
	}
}

void	ft_print_file(int *tab, char **av, int ac, int stop)
{
	char	chr;
	int		a;

	a = 0;
	while (tab[1] > a)
	{
		read(tab[0], &chr, 1);
		a++;
	}
	ft_print_filename(av, stop, ac);
	while (read(tab[0], &chr, 1))
		write(1, &chr, 1);
	if (stop != (ac - 1))
		ft_putstr(1, "\n");
	close(tab[0]);
}

int		main(int ac, char **av)
{
	int i;

	if (ac < 4)
		ft_std_in();
	i = ft_atoi(av[2]) - 1;
	if (av[2][0] == '+' && i == -1)
	{
		ft_display_result(i, ac, av);
	}
	if (i >= 0)
	{
		ft_print(ac, av, i);
		return (0);
	}
	else if (i == -1)
	{
		write(2, "tail: illegal offset -- ", 24);
		ft_putstr(2, av[2]);
		write(2, "\n", 1);
		return (0);
	}
	i = (i * -1) - 1;
	ft_display_result(i, ac, av);
	return (0);
}
