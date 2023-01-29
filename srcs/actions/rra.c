/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 13:25:46 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Shift the stack a one step down.
// Last node become the first one.
void	rra(t_push_swap *data)
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
