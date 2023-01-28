/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:56:21 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:22:31 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Push first node of stack a on stack b.
//Does nothing if a is empty
void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first_node_a;
	t_stack	*first_node_b;

	first_node_a = *stack_a;
	if (first_node_a == NULL)
		return ;
	first_node_b = *stack_b;
	*stack_a = first_node_a->next;
	first_node_a->next = first_node_b;
	*stack_b = first_node_a;
}
