/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:11:26 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:59:01 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Push first node of stack b on stack a
//Does nothing if b is empty
void	pa(t_push_swap *data)
{
	t_stack	*first_node_a;
	t_stack	*first_node_b;

	first_node_a = data->stack_a;
	first_node_b = data->stack_b;
	if (first_node_b == NULL)
		return ;
	data->stack_b = first_node_b->next;
	first_node_b->next = first_node_a;
	data->stack_a = first_node_b;
}
