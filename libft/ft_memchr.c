/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:58:12 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/28 09:25:03 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	car;
	int				i;

	i = 0;
	car = (unsigned char)c;
	str1 = (unsigned char *)str;
	while (n--)
	{
		if (str1[i] == car)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
