/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 20:04:30 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/11 11:08:37 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H
int		is_printable(char c, char **g, int y, int x);
void	ft_print_grid(char **grille);
char	ft_backtracking_rev(char **tab, int y, int x, char num);
char	match_tab(char *s1, char *s2);
#endif
