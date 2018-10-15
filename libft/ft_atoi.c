/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 13:47:46 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/24 18:23:36 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*end_of_num(const char **str)
{
	const char *s;

	while (**str == '0')
		(*str)++;
	s = *str;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			break ;
		s++;
	}
	return (s);
}

static int			process(const char *str, const char *s,
		const char *end, int sign)
{
	unsigned long long	result;

	result = 0;
	while (++s < end)
		result = result * 10 + (unsigned long long)(*s - '0');
	if ((end - str) > 19 || result >= 9223372036854775807L)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (sign * (int)result);
}

int					ft_atoi(const char *str)
{
	const char			*end;
	const char			*s;
	int					sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	end = end_of_num(&str);
	s = str - 1;
	return (process(str, s, end, sign));
}
