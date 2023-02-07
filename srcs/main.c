/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/07 16:14:25 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*data;

	data = malloc(sizeof (t_push_swap));
	parse_nb(data, argc - 1, &argv[1]);
	data->stack_b = NULL;
	index_stack(data);
	if (get_stack_size(data->stack_a) <= 5)
		sorting_small(data);
	else
		sorting(data);
	free_stack(data->stack_a);
	free(data);
	return (0);
}
