/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 11:12:38 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 20:19:04 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strstr(char *str, char *to_find)
{
	int x;
	int i;

	if (str && to_find)
	{
		i = 0;
		x = 0;
		while (*(str + x))
		{
			while (str[x] == to_find[i] && to_find[i] != '\0')
			{
				i += 1;
				x += 1;
			}
			if (!to_find[i])
				return (str + (x - i));
			x -= i;
			i = 0;
			if (str[x])
				x += 1;
		}
	}
	return (NULL);
}
