/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 18:14:19 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	while (node)
	{
		ft_printf("index : %d, value : %d\n", node->index, node->value);
		node = node->next;
	}
	ft_printf("\n");
}

void print(t_push_swap *data)
{
ft_printf("Stack A :\n");
	print_list(&data->stack_a);
	ft_printf("Stack B :\n");
	print_list(&data->stack_b);
}

int	main(int argc, char **argv)
{
	t_push_swap	*data;

	data = malloc(sizeof(t_push_swap));
	parse_nb(data, argc - 1, &argv[1]);
	data->stack_b = NULL;
	print(data);
	pb(data);
	pb(data);
	print(data);
	ra(data);
	rb(data);
	print(data);
	return (0);
}
