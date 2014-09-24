/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 17:09:07 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 23:29:09 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		i;

	if (dest && src && nb)
	{
		i = 0;
		while (nb)
		{
			dest[i] = src[i];
			nb -= 1;
			i += 1;
		}
		return (dest);
	}
	return (NULL);
}
