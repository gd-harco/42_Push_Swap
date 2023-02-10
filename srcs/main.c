/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/09 13:50:41 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*data;

	if (argc == 1)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return (1);
	}
	data = malloc(sizeof (t_push_swap));
	parse_nb(data, argc - 1, &argv[1]);
	data->stack_b = NULL;
	index_stack(data);
	if (!is_sorted(data->stack_a))
	{
		if (data->size_a <= 5)
			sort_small(data);
		else
			sorting(data);
	}
	free_stack(data->stack_a);
	free(data);
	return (0);
}
