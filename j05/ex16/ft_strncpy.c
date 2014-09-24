/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/05 22:19:28 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/05 22:37:56 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				x;
	unsigned int	num;

	num = size;
	if (size && dest && src)
	{
		while (size && src[x])
		{
			dest[x] = src[x];
			x += 1;
			size -= 1;
		}
		return (num);
	}
	return (0);
}
