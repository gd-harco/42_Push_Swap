/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:43:17 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:45:07 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr_ra(t_push_swap *data)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (data->stack_a == NULL)
		return ;
	last_node = get_last_node(&data->stack_a);
	first_node = data->stack_a;
	data->stack_a = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}

static void	rr_rb(t_push_swap *data)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (data->stack_b == NULL)
		return ;
	last_node = get_last_node(&data->stack_b);
	first_node = data->stack_b;
	data->stack_b = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}

//Shift both stack one element up.
//First node become last one
//If one stack is empty or has just one node, does nothing to that stack
void	rr(t_push_swap *data)
{
	rr_ra(data);
	rr_rb(data);
	ft_printf("rr\n");
}
