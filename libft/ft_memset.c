/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:08:23 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/22 10:19:32 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	car;
	size_t			count;

	str = (char*)b;
	car = (unsigned char)c;
	count = 0;
	while (count < len)
	{
		*str = car;
		str++;
		count++;
	}
	return (b);
}
