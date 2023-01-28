/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:44:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:22:22 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 node of stack a.
//Does nothing if a is empty or as only one node
void	sa(t_stack **stack)
{
	t_stack	*node_one;
	t_stack	*node_two;

	node_one = *stack;
	node_two = node_one->next;
	if (node_two == NULL || node_one == NULL)
		return ;
	*stack = node_two;
	node_one->next = node_two->next;
	node_two->next = node_one;
}
