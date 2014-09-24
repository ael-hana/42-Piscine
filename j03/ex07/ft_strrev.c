/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/01 16:08:04 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/09 12:13:06 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	chr;

	len = 0;
	i = 0;
	while (*(str + i))
		i++;
	i -= 1;
	while (i > len)
	{
		chr = *(str + len);
		str[len] = *(str + i);
		str[i] = chr;
		i -= 1;
		len += 1;
	}
	return (str);
}
