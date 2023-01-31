/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:54:17 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/31 17:39:59 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	int		last_node;
	int		stack_size;
	t_stack	*free_node;

	stack_size = get_stack_size(stack) - 1;
	while (stack_size >= 0)
	{
		free_node = stack;
		last_node = stack_size;
		while (last_node--)
			free_node = free_node->next;
		free(free_node);
		stack_size--;
	}
}
