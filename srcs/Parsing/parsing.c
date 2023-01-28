/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:13:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/27 15:13:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack(t_stack **stack, size_t item_nb, char **table);

void	parse_nb(t_stack **stack_a, int new_argc, char **argv)
{
	char	*temp;
	char	**temp_table;
	size_t	item_nb;

	*stack_a = NULL;
	temp = ft_strjoin_piscine(new_argc, argv, " ");
	temp_table = ft_split(temp, ' ');
	free(temp);
	item_nb = ft_array_length((void **)temp_table);
	if (have_duplicate(temp_table) || have_non_digit(temp_table))
	{
		ft_free_array((void **)temp_table);
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(1);
	}
	fill_stack(stack_a, item_nb, temp_table);
	ft_free_array((void **)temp_table);
}

static void	fill_stack(t_stack **stack, size_t item_nb, char **table)
{
	size_t	i;
	t_stack	*new_node;

	i = 0;
	while (i < item_nb)
	{
		new_node = stack_new(i + 1, table[i]);
		stack_add_back(stack, new_node);
		i++;
	}
}
