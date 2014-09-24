/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 16:41:34 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 16:56:47 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;

	if (dest && src)
	{
		i = 0;
		x = 0;
		while (dest[i])
			i += 1;
		while (src[x])
		{
			dest[i] = src[x];
			x += 1;
			i += 1;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
