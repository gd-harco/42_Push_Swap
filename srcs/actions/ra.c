/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:39:03 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift the stack a one step up.
//First node become the last one.
void	ra(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	last_node = get_last_node(stack);
	first_node = *stack;
	*stack = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}
