/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:15:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/27 16:15:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(size_t index, char *str)
{
	t_stack	*node;

	node = malloc(sizeof (t_stack));
	node->index = index;
	node->value = ft_atoi(str);
	node->next = NULL;
	return (node);
}

t_stack	*stack_last(t_stack *stack)
{
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}

void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!stack)
		return ;
	if (*stack)
	{
		tail = stack_last(*stack);
		tail->next = new;
	}
	else
		*stack = new;
}
