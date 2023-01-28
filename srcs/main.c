/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/27 12:22:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_index(t_stack **stack)
{
	t_stack	*node;

	node = *stack;
	while (node)
	{
		ft_printf("%d\n", node->index);
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
	print_list_index(&stack_a);
	sa(&stack_a);
	print_list_index(&stack_a);
	return (0);
}
