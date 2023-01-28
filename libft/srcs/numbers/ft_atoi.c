/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:41:46 by gd-harco          #+#    #+#             */
/*   Updated: 2022/11/09 16:22:01 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

static long	ft_overflow(int sign)
{
	if (sign < 0)
		return (LONG_MIN);
	else
		return (LONG_MAX);
}

static bool	have_overflown(long result, char c)
{
	long	old;

	old = result;
	result = (result * 10) + (c - '0');
	if (result < old)
		return (true);
	return (false);
}

long	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	char	*s;

	result = 0;
	sign = 1;
	s = (char *)str;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		if (have_overflown(result, *s))
			return (ft_overflow(sign));
		result = (result * 10) + (*s - '0');
		s++;
	}
	return ((int)result * sign);
}
