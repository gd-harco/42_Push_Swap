/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:54 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/31 15:15:08 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_size(t_stack *stack)
{
	int		i;
	t_stack	*node;

	i = 0;
	node = stack;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}

t_stack	*get_last_node(t_stack **stack)
{
	t_stack	*last_node;

	last_node = *stack;
	while (last_node->next)
		last_node = last_node->next;
	return (last_node);
}
