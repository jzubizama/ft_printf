/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:02:58 by novadecordi       #+#    #+#             */
/*   Updated: 2023/07/11 14:48:13 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

//Specifies the number of char until the end or a %
size_t	ft_pfstrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '%')
		i++;
	return (i);
}

//Checks if the character is a correct format type or not
char	ft_is_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (c);
	return (0);
}
