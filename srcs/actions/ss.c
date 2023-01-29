/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:43:17 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:53:12 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ss_sa(t_push_swap *data)
{
	t_stack	*node_one;
	t_stack	*node_two;

	node_one = data->stack_a;
	node_two = node_one->next;
	if (node_two == NULL || node_one == NULL)
		return ;
	data->stack_a = node_two;
	node_one->next = node_two->next;
	node_two->next = node_one;
}

static void	ss_sb(t_push_swap *data)
{
	t_stack	*node_one;
	t_stack	*node_two;

	if (data->stack_b == NULL)
		return ;
	node_one = data->stack_b;
	node_two = node_one->next;
	if (node_two == NULL || node_one == NULL)
		return ;
	data->stack_b = node_two;
	node_one->next = node_two->next;
	node_two->next = node_one;
	ft_printf("sb\n");
}

//Swap the first 2 node of both stack.
//If one stack is empty or has just one node, does nothing to that stack
void	ss(t_push_swap *data)
{
	ss_sa(data);
	ss_sb(data);
	ft_printf("ss\n");
}
