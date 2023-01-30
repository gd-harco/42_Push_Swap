/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:35:51 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/30 15:07:06 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrr_rrb(t_push_swap *data)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*new_last;
	int		size;

	if (data->stack_b == NULL)
		return ;
	size = get_stack_size(data->stack_b) - 1;
	last_node = get_last_node(&data->stack_b);
	first_node = data->stack_b;
	new_last = first_node;
	while (size--)
		new_last = new_last->next;
	data->stack_b = last_node;
	last_node->next = first_node;
	new_last->next = NULL;
}

static void	rrr_rra(t_push_swap *data)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*new_last;
	int		size;

	if (data->stack_a == NULL)
		return ;
	size = get_stack_size(data->stack_a) - 1;
	last_node = get_last_node(&data->stack_a);
	first_node = data->stack_a;
	new_last = first_node;
	while (size--)
		new_last = new_last->next;
	data->stack_a = last_node;
	last_node->next = first_node;
	new_last->next = NULL;
}

//Shift both stack one element down.
//Last node become the first one
//If one stack is empty or has just one node, does nothing to that stack
void	rrr(t_push_swap *data)
{
	rrr_rra(data);
	rrr_rrb(data);
	ft_printf("rrr\n");
}
