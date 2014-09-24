/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 18:10:27 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/21 09:11:23 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tool.h"

int			ft_error(void)
{
	write (2, "map error\n", 10);
	return (1);
}

void		ft_putchar(char x)
{
	write(1, &x, 1);
}

int			ft_verif(char *str, t_env *e)
{
	if (!e || other_test(str, e) || test_size(str, e))
		return (ft_error());
	e->tab = create_tab(str, e, init_tab(e));
	return (0);
}

int			main(int argc, char **argv)
{
	char	*str;
	t_env	*e;
	int		numb;

	numb = 1;
	e = (t_env *)malloc(sizeof(t_env));
	while (numb < argc)
	{
		str = ft_read_file(argv[numb]);
		if (str)
		{
			ft_verif(str, e);
			replace_map(e);
		}
		numb++;
	}
	if (argc < 1)
		return (0);
	if (argc == 1)
	{
		str = ft_read_stdin();
		return (ft_verif(str, e));
	}
	return (0);
}
