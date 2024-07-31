/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:34:23 by jzubizar          #+#    #+#             */
/*   Updated: 2023/07/11 14:39:15 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "./libft/libft.h"

typedef struct s_flag
{
	int	zeros;
	int	justify;
	int	precision;
	int	precwidth;
	int	width;
	int	hash;
	int	space;
	int	plus;
}				t_flag;

int		ft_putunbr_fd(unsigned int n, int fd, t_flag flags);
int		ft_putxnbr_fd(unsigned int n, t_flag flags);
int		ft_putxmnbr_fd(unsigned int n, t_flag flags);
int		ft_putxptr_fd(void *n, int fd, t_flag flags);
size_t	ft_pfstrlen(const char *s);
int		ft_pfputstr_fd(const char *s, int fd);
char	ft_is_type(char c);
int		ft_printf(const char *str, ...);
int		ft_pfputnbr_fd(int n, int fd, t_flag flags);
int		ft_pfputargstr_fd(const char *s, int fd, t_flag flags);
int		ft_print_nbr(char *nbr, t_flag flags, int n);
int		ft_precision_nul(t_flag *flags);

int		ft_print_char_fd(char c, t_flag flags, int fd);
t_flag	ft_flags_zeros(void);
int		ft_process_flags(int i, t_flag *flags, const char *str);
int		ft_print_width(int tot_width, int filled, int zeros);

#endif
