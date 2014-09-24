/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 22:31:01 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/14 22:31:20 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

void	ft_std_in(void)
{
	char	str[30720];

	while (read(0, str, 30720))
		;
}

int		ft_display_result(int i, int ac, char **av)
{
	int tab[2];
	int stop;

	stop = 3;
	tab[1] = i;
	while (ac > stop)
	{
		errno = 0;
		tab[0] = open(av[stop], O_RDWR);
		if (errno == EISDIR)
			return (0);
		else if (tab[0] != -1)
			ft_print_file(tab, av, ac, stop);
		else
		{
			write(2, "cat: ", 5);
			ft_putstr(2, av[stop]);
			write(2, " No such file or directory\n", 27);
		}
		stop += 1;
	}
	return (0);
}

void	ft_print(int ac, char **tab, int i)
{
	int		x;
	int		fd;
	int		stop;
	char	chr;

	stop = 3;
	while (stop++ != ac)
	{
		x = 0;
		ft_print_filename(tab, (stop - 1), ac);
		fd = open(tab[stop - 1], O_RDONLY);
		while (read(fd, &chr, 1))
			x++;
		x -= i;
		close(fd);
		fd = open(tab[stop - 1], O_RDONLY);
		while (x-- > 1)
			read(fd, &chr, 1);
		while (read(fd, &chr, 1))
			write(1, &chr, 1);
		close(fd);
		if (stop != ac)
			write(1, "\n", 1);
	}
}

int		ft_atoi(char *str)
{
	int a;
	int f;
	int signe;

	signe = 1;
	a = 0;
	f = 0;
	while (str[a] == ' ')
		a++;
	if (str[a] == '-')
		a++;
	else if (str[a] == '+')
	{
		signe = -1;
		a++;
	}
	while (str[a] - '0' < 10 && str[a] - '0' > -1)
	{
		f = f * 10 + str[a] - '0';
		a += 1;
	}
	if (str[a] != '\0')
		return (0);
	f = f * signe;
	return (f);
}
