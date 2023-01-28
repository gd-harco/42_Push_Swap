/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 18:32:16 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift the stack a one step down.
//Last node become the first one.
//TODO fix, doesnt work, need to set the new last node to NULL
void	rra(t_push_swap *data)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (data->stack_a == NULL)
		return ;
	last_node = get_last_node(&data->stack_a);
	first_node = data->stack_a;
	data->stack_a = last_node;
	last_node->next = first_node;
	first_node->next = NULL;
}
