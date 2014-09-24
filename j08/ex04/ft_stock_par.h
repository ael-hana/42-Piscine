/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 11:15:48 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/11 22:07:32 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
char				**ft_split_whitespaces(char *str);
struct s_strock_par	*ft_param_to_tab(int ac, char **av);

typedef struct		s_strock_par
{
	int				size_params;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;
#endif
