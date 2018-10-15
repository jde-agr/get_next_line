/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:30:53 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/22 09:00:52 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (*s)
		s++;
	while (i <= ft_strlen(str))
	{
		if (*s == c)
			return (&*s);
		else
			s--;
		i++;
	}
	if (c == '\0')
		return (&*s);
	return (NULL);
}
