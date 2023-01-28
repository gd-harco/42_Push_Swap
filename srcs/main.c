/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 17:32:06 by gd-harco         ###   ########lyon.fr   */
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

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	(void )stack_b;
	parse_nb(&stack_a, argc - 1, &argv[1]);
	ft_printf("Stack A :\n ");
	print_list(&stack_a);
	ft_printf("Stack B :\n ");
	print_list(&stack_b);
	ra(&stack_a);
	ft_printf("Stack A :\n ");
	print_list(&stack_a);
	ft_printf("Stack B :\n ");
	print_list(&stack_b);
	return (0);
}
