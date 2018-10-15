/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 16:08:53 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/28 09:14:24 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*l;

	l = needle;
	if (*l == '\0')
		return ((char*)haystack);
	while (len--)
	{
		if (*l == *haystack)
			l++;
		else
		{
			haystack -= (l - needle);
			len += (l - needle);
			l = needle;
		}
		haystack++;
		if (*l == '\0')
			return ((char*)(haystack - (l - needle)));
		if (*haystack == '\0')
			break ;
	}
	return (NULL);
}
