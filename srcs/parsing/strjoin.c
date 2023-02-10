/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:44:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/27 14:44:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_sep(char *sep, char *joined, int k)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		joined[k] = sep[j];
		j++;
		k++;
	}
}

char	*joining(char **strs, char *joined, char *sep, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			joined[k] = strs[i][j];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			add_sep(sep, joined, k);
			k += ft_strlen(sep);
		}
		j = 0;
		i++;
	}
	joined[k] = '\0';
	return (joined);
}

int	get_strs_size(size_t size, char **strs)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = 0;
	result = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			result++;
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}

char	*strjoin(int size, char **strs, char *sep)
{
	char	*joined;

	if (size == 0)
		return ("");
	joined = (char *) malloc((sizeof(char) * \
		((get_strs_size(size, strs)) + ((ft_strlen(sep)) * (size - 1)) + 1)));
	return (joining(strs, joined, sep, size));
}
