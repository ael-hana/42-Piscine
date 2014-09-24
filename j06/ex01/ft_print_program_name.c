/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/06 14:09:33 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/07 10:02:37 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i += 1;
		}
	}
	return (0);
}
