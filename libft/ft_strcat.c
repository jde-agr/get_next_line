/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:50:29 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/24 11:28:27 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	char *result;

	result = str1;
	if (!str1 && !str2)
		return (NULL);
	while (*str1)
		str1++;
	while (*str2)
		*str1++ = *str2++;
	*str1 = '\0';
	return (result);
}
