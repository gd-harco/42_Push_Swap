/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:49:32 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/30 16:21:07 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_sorted(t_stack *stack);

void	sorting(t_push_swap *data)
{
	// int		bit_size;
	int		current_bit;
	t_stack	*top_stack_a;
	t_stack	*top_stack_b;

	// bit_size = (sizeof (int) * 8) - 1;
	current_bit = 0;
	while (!is_sorted(data->stack_a))
	{
		top_stack_a = data->stack_a;
		top_stack_b = data->stack_b;
		while (top_stack_a)
		{
			if (top_stack_a->index << current_bit & 1)
				pb(data);
			else
				ra(data);
		}
		while (top_stack_b)
			pa(data);
		current_bit++;
	}
}

static bool	is_sorted(t_stack *stack)
{
	while (stack)
	{
		if (stack->index > stack->next->index)
			return (false);
		stack = stack->next;
	}
	return (true);
}
