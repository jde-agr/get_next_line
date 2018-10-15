/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:30:47 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/25 10:31:41 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memdup(const void *mem, size_t size)
{
	void	*dst;

	dst = (void*)malloc(size);
	if (!dst)
		return (0);
	ft_memcpy(dst, mem, size);
	return (dst);
}
