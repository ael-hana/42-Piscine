/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/15 16:36:14 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/15 16:37:03 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_word(char *str, char	*word)
{
	int	i;

	i = 0;
	while (*str == ' ')
		str++;
	while (word[i] != '\0' && str[i] != '\0')
	{
		if (word[i] == str[i] || (word[i] + 32) == str[i] ||
			(word[i] - 32) == str[i])
			i += 1;
		else
			return (0);
	}
	if (!word[i])
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	while (argc > 0)
	{
		if (check_word(argv[argc - 1], "president"))
			write(1, "Alert!!!\n", 10);
		if (check_word(argv[argc - 1], "attack"))
			write(1, "Alert!!!\n", 10);
		if (check_word(argv[argc - 1], "powers"))
			write(1, "Alert!!!\n", 10);
		argc--;
	}
	return (0);
}
