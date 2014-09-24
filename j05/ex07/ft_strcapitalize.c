/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 12:09:40 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/06 19:26:32 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcapitalize(char *str)
{
	int i;

	if (str)
	{
		i = 0;
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
			i += 1;
		}
		while (str[i])
		{
			if (!((str[i - 1] >= '0' && str[i - 1] <= '9') ||
					(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			i += 1;
		}
		return (str);
	}
	return (NULL);
}
