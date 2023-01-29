/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:05:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:11:36 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

bool	have_duplicate(char **to_check)
{
	size_t	index;
	size_t	target;

	index = 0;
	while (to_check[index])
	{
		target = index + 1;
		while (to_check[target])
		{
			if (ft_strcmp(to_check[index], to_check[target]) == 0)
				return (true);
			target++;
		}
		index++;
	}
	return (false);
}

bool	have_non_digit(char **to_check)
{
	size_t	index;
	size_t	cur_char;

	index = 0;
	while (to_check[index])
	{
		cur_char = 0;
		while (to_check[index][cur_char])
		{
			if (to_check[index][cur_char] == '-'
					|| to_check[index][cur_char] == '+')
				cur_char++;
			else if (ft_isdigit(to_check[index][cur_char]) == 0)
				return (true);
			else
				cur_char++;
		}
		index++;
	}
	return (false);
}
