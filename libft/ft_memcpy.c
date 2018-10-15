/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:35:57 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/22 10:24:39 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	count;

	str1 = (char*)src;
	str2 = (char*)dest;
	count = 0;
	while (count < n)
	{
		str2[count] = str1[count];
		count++;
	}
	return (dest);
}
