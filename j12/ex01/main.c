/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 18:05:45 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/14 22:24:32 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <errno.h>

void	ft_print_file(int fd)
{
	char	chr;

	while (read(fd, &chr, 1))
		write(1, &chr, 1);
	close(fd);
}

void	ft_std_in(void)
{
	char	str[30720];
	int		i;

	i = 0;
	while ((i = read(0, str, 30720)))
		write(1, str, i);
}

void	ft_putstr_fd(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_display_result(int stop, int ac, char **av)
{
	int fd;

	while (ac > stop)
	{
		errno = 0;
		fd = open(av[stop], O_RDWR);
		if (errno == EISDIR)
		{
			ft_putstr_fd(2, "cat: ");
			ft_putstr_fd(2, av[stop]);
			ft_putstr_fd(2, ": Is a directory\n");
		}
		else if (fd != -1)
			ft_print_file(fd);
		else
		{
			write(2, "cat: ", 5);
			ft_putstr_fd(2, av[stop]);
			write(2, " No such file or directory\n", 27);
		}
		stop += 1;
	}
}

int		main(int ac, char **av)
{
	if (ac < 2)
		ft_std_in();
	ft_display_result(1, ac, av);
	return (0);
}
