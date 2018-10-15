/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:17:36 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/24 11:28:38 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	char *result;

	result = str1;
	if (!str1 && !str2)
		return (NULL);
	while (*str1)
		str1++;
	while (*str2 && n--)
		*str1++ = *str2++;
	*str1 = '\0';
	return (result);
}
