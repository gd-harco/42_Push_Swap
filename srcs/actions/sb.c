/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:44:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 18:13:05 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 node of stack b.
//Does nothing if b is empty or as only one node
void	sb(t_push_swap *data)
{
	t_stack	*node_one;
	t_stack	*node_two;

	node_one = data->stack_b;
	node_two = node_one->next;
	if (node_two == NULL || node_one == NULL)
		return ;
	data->stack_b = node_two;
	node_one->next = node_two->next;
	node_two->next = node_one;
}
