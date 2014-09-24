/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hana <ael-hana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/14 22:31:31 by ael-hana          #+#    #+#             */
/*   Updated: 2014/08/14 22:31:39 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H
# define TOOL_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <errno.h>

int		ft_atoi(char *str);
void	ft_putstr(int err, char *str);
void	ft_print_filename(char **av, int stop, int ac);
void	ft_print_file(int *tab, char **av, int ac, int stop);
void	ft_std_in(void);
int		ft_display_result(int i, int ac, char **av);
void	ft_print(int acm, char **tab, int i);

#endif
