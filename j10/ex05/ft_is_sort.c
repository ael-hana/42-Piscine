/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/11 19:57:34 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/12 16:39:35 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i += 1;
	}
	return (1);
}