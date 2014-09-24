/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:17:09 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/07 17:03:52 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_putchar(char c)
{
	write(1, &c, 1);
}
void				ft_print_to_sort(char *str)
{
	int				i;
	unsigned char	chr;

	chr = 2;
	i = 0;
	while (chr < 128)
	{
		if (!str[i])
		{
			i = 0;
			chr += 1;
		}
		if (str[i] == chr)
			ft_putchar(str[i]);
		i += 1;
	}
}

int					main(int argc, char **argv)
{
	int				i;

	i = ;
	while (argc != i)
	{
		ft_print_to_sort(argv[i]);
		i += 1;
	}
	return (0);
}
