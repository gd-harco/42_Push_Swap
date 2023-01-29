/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 16:43:17 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift the stack a one step up.
//First node become the last one.
void	ra(t_push_swap *data)
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
	ft_printf("ra\n");
}
