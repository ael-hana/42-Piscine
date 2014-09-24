/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 18:12:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 22:01:19 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int x;
	int num;

	num = size;
	if (dest && src)
		return (0);
	i = 0;
	size -= 1;
	x = 0;
	while (dest[x] && size)
	{
		x += 1;
		size -= 1;
	}
	while (size && src[i])
	{
		dest[x] = src[i];
		size -= 1;
		i += 1;
		x += 1;
	}
	dest[x] = '\0';
	return (num);
}
