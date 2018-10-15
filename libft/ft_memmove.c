/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:46:27 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/31 12:49:35 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (dest > src)
	{
		while (len > 0)
		{
			*(char*)(dest + len - 1) = *(char*)(src + len - 1);
			len--;
		}
	}
	else
	{
		while (len - i > 0)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dest);
}
