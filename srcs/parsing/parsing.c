/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:32:59 by gd-harco          #+#    #+#             */
/*   Updated: 2023/02/22 10:01:16 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_stack(t_stack **stack, size_t item_nb, char **table);

void	parse_nb(t_push_swap *data, int new_argc, char **argv)
{
	char	*temp;
	char	**temp_table;
	size_t	item_nb;

	data->stack_a = NULL;
	temp = strjoin(new_argc, argv, " ");
	temp_table = ft_split(temp, ' ');
	free(temp);
	item_nb = ft_array_length((void **)temp_table);
	if (have_duplicate(temp_table)
		|| have_non_digit(temp_table)
		|| have_weird_str(temp_table)
		|| *temp_table == NULL)
	{
		ft_free_array((void **)temp_table);
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(1);
	}
	fill_stack(&data->stack_a, item_nb, temp_table);
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
		if (new_node == NULL)
		{
			ft_free_split(table);
			free_stack(*stack);
			exit (1);
		}
		stack_add_back(stack, new_node);
		i++;
	}
}
