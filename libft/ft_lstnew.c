/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:51:30 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/25 10:46:56 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*head;
	void	*c;

	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
		return (0);
	if (content)
	{
		c = ft_memdup(content, content_size);
		if (!c)
		{
			free(head);
			return (0);
		}
		head->content = c;
		head->content_size = content_size;
	}
	else
	{
		head->content = 0;
		head->content_size = 0;
	}
	head->next = 0;
	return (head);
}
