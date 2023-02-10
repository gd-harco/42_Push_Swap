/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:06:21 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/30 15:07:22 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_index(t_stack *stack, int current_value);

void	index_stack(t_push_swap *data)
{
	t_stack	*current;

	current = data->stack_a;
	while (current)
	{
		current->index = get_index (data->stack_a, current->value);
		current = current->next;
	}
	data->size_a = get_stack_size(data->stack_a);
	data->size_b = 0;
}

static int	get_index(t_stack *stack, int current_value)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->value < current_value)
			index++;
		stack = stack->next;
	}
	return (index);
}
