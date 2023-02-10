/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:49:32 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/09 13:47:42 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_index_to_b(t_push_swap *data, size_t index);
static void	sort_stack_four_five(t_push_swap *data);
static void	sort_stack_three(t_push_swap *data, int shift);

void	sorting(t_push_swap *data)
{
	int		bit_size;
	int		current_bit;
	size_t	count;

	bit_size = (sizeof (int) * 8) - 1;
	current_bit = 0;
	while (current_bit < bit_size)
	{
		count = data->size_a;
		if (is_sorted(data->stack_a))
			return ;
		while (count--)
		{
			if ((data->stack_a->index >> current_bit & 1))
				ra(data);
			else
				pb(data);
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
		sort_stack_three(data, 0);
	else
		sort_stack_four_five(data);
}

static void	sort_stack_three(t_push_swap *data, int shift)
{
	if (data->stack_a->index - shift == 0)
	{
		rra(data);
		sa(data);
	}
	else if (data->stack_a->index - shift == 1)
	{
		if (data->stack_a->next->index - shift == 2)
			rra(data);
		else
			sa(data);
	}
	else
	{
		ra(data);
		if (!is_sorted(data->stack_a))
			sa(data);
	}
}

static void	sort_stack_four_five(t_push_swap *data)
{
	int	shift;
	int	size;

	size = data->size_a;
	shift = 1;
	push_index_to_b(data, 0);
	if (size == 5)
	{
		push_index_to_b(data, 1);
		shift++;
	}
	if(!is_sorted(data->stack_a))
		sort_stack_three(data, shift);
	pa(data);
	if (size == 5)
		pa(data);
}

static void	push_index_to_b(t_push_swap *data, size_t index)
{
	while (data->stack_a->index != index)
		ra(data);
	pb(data);
}
