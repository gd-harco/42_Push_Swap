/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:49:32 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/07 19:28:10 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_index_to_b(t_push_swap *data, size_t index);
static void	sort_stack_four_five(t_push_swap *data);
static void	sort_stack_three(t_push_swap *data);
static bool	is_sorted(t_stack *stack);

void	sorting(t_push_swap *data)
{
	int		bit_size;
	int		current_bit;

	bit_size = (sizeof (int) * 8) - 1;
	current_bit = 0;
	while (current_bit < bit_size)
	{
		if (is_sorted(data->stack_a))
			return ;
		data->size_a = get_stack_size(data->stack_a);
		while (data->size_a)
		{
			if ((data->stack_a->index >> current_bit & 1))
				ra(data);
			else
				pb(data);
			data->size_a--;
		}
		while (data->stack_b)
			pa(data);
		current_bit++;
	}
}

void	sort_small(t_push_swap *data)
{
	if (data->size_a == 2)
	{
		if (!is_sorted(data->stack_a))
			sa(data);
	}
	else if (data->size_a == 3)
		sort_stack_three(data);
	else
		sort_stack_four_five(data);
}

static void	sort_stack_three(t_push_swap *data)
{
	if (data->stack_a->index >)
	{
		ra(data);
		if (!is_sorted(data->stack_a))
			sa(data);
	}
	else if (data->stack_a->index == 1)
	{
		if (data->stack_a->next->index == 2)
			rra(data);
		else
			sa(data);
	}
	else
	{
		rra(data);
		sa(data);
	}
}

static void	sort_stack_four_five(t_push_swap *data)
{
	push_index_to_b(data, 0);
	if (data->size_a == 5)
		push_index_to_b(data, 1);
	sort_stack_three(data);
	pa(data);
	if (data->size_a == 5)
		pa(data);
}

static void	push_index_to_b(t_push_swap *data, size_t index)
{
	while(data->stack_a->index != index)
		ra(data);
	pb(data);
}

static bool	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (false);
		stack = stack->next;
	}
	return (true);
}
