/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:44:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:54:05 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 node of stack a.
//Does nothing if a is empty or as only one node
void	sa(t_push_swap *data)
{
	t_stack	*node_one;
	t_stack	*node_two;

	if (data->stack_a == NULL)
		return ;
	node_one = data->stack_a;
	node_two = node_one->next;
	if (node_two == NULL || node_one == NULL)
		return ;
	data->stack_a = node_two;
	node_one->next = node_two->next;
	node_two->next = node_one;
	ft_printf("sa\n");
}
