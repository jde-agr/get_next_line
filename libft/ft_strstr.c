/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 10:51:04 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/23 12:12:27 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int sum;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	sum = 0;
	while (*haystack)
	{
		if (*haystack == needle[i])
		{
			i++;
			sum++;
		}
		else
		{
			haystack = haystack - i;
			i = 0;
		}
		if (needle[i] == '\0')
			return ((char*)(haystack - i + 1));
		haystack++;
	}
	return (NULL);
}
