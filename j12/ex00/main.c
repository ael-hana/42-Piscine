/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/13 16:57:43 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/14 15:53:13 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

int		main(int ac, char **av)
{
	int		fd;
	char	chr;

	if (ac < 2)
	{
		write(2, "File name missing.\n", 20);
		return (-1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &chr, 1))
		write(1, &chr, 1);
	close(fd);
	return (0);
}
