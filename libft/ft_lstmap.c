/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:20:17 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/25 12:55:22 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;

	if (lst)
	{
		node = f(lst);
		node->next = ft_lstmap(lst->next, f);
		return (node);
	}
	return (NULL);
}
