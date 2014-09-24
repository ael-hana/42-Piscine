/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/09 22:34:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/10 17:44:58 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match_run(char *s1, char *s2, int n)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s2[x] == '*')
		x += 1;
	while (s1[i])
	{
		while (s1[i] == s2[x] && s1[i] != '\0' && s2[x] != '\0')
		{
			i += 1;
			x += 1;
			while (s2[x] == '*')
				x += 1;
		}
		if (s2[x] == '\0')
			return (match_run(&s1[i], s2, n + 1));
		while (s2[x - 1] != '*' && x > 0)
			x -= 1;
		i += 1;
	}
	return (n);
}

int		nmatch(char *s1, char *s2)
{
	return (match_run(s1, s2, 0));
}
