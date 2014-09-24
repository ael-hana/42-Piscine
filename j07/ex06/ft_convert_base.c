/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/08 09:33:17 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/08 09:46:54 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_put_base(int nb, char *base)
{
	int		len;

	len = 0;
	while (base[len])
		len += 1;
	if (nb >= len)
	{
		ft_put_base(nb / len, base);
		ft_put_base(nb % len, base);
	}
	else
		ft_putchar(base[nb]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int num;

	num = 0;
	i = 0;
	while (nbr[i])
	{
		i += 1;
		num *= 10;
		num += nbr[i] - '0';
	}
	return (0);
}
