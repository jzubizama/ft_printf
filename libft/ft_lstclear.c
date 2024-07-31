/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzubizar <jzubizar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:08:53 by jzubizar          #+#    #+#             */
/*   Updated: 2023/07/10 13:02:26 by jzubizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!del)
		return ;
	while (*lst)
	{
		node = *lst;
		del(node->content);
		*lst = node ->next;
		free (node);
	}
}
