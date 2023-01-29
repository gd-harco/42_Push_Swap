/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:43:25 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift the stack b one step up.
//First node become the last one.
void	rb(t_push_swap *data)
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
	ft_printf("rb\n");
}

