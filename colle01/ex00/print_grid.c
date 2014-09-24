/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfernand <cfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 14:49:10 by cfernand          #+#    #+#             */
/*   Updated: 2014/08/11 11:08:34 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_grid(char **grid)
{
	int i;
	int j;

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 9)
		{
			ft_putchar(grid[j][i]);
			i++;
			if (i < 9)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		j++;
	}
}

char	match_tab(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2 != '\0' && *s1 != '\0')
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}
