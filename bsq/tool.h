/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlivarto <nlivarto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/18 18:07:24 by nlivarto          #+#    #+#             */
/*   Updated: 2014/08/21 08:41:00 by ael-hana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_H
# define TOOL_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# define BUF_SIZE 100000

typedef struct		s_env
{
	int				length;
	int				width;
	char			**tab;
	char			empty;
	char			obs;
	char			fill;
	int				max;
	int				pos_i;
	int				pos_j;
}					t_env;

int					other_test(char *str, t_env *e);
int					test_size(char *str, t_env *e);
char				*ft_read_arg(char *av);
int					number_return_line(char *str);
char				**init_tab(t_env *e);
char				**create_tab(char *str, t_env *e, char **tab);
int					ft_numb_chr(char *str, t_env *e);
int					tab_bool(t_env *e);
int					ft_line_one(char *str, t_env *e);
char				*ft_read_file(char *av);
char				ft_check_chr(t_env *e);
char				*ft_read_stdin(void);
int					ft_verif(char *str, t_env *e);
char				*ft_concact_str(char *s1, char *s2);
int					ft_strlen(char *str);
char				*ft_read_file(char *av);
int					ft_error(void);
void				ft_putchar(char x);
int					ft_position(int i, int j, t_env *e);
int					ft_number(int i, int j, t_env *e);
void				rewrite_map(t_env *e);
int					replace_map(t_env *e);

#endif
