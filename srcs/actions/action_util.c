/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:54 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:26:57 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last_node(t_stack **stack)
{
	t_stack	*last_node;

	last_node = *stack;
	while (last_node->next)
		last_node = last_node->next;
	return (last_node);
}
