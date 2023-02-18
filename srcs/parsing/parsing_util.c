/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:15:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/31 18:02:47 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(size_t index, char *str)
{
	t_stack	*node;
	long	overflow_check;

	overflow_check = ft_atoll(str);
	if (overflow_check > INT_MAX || overflow_check < INT_MIN)
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return (NULL);
	}
	node = malloc(sizeof (t_stack));
	node->index = index;
	node->value = (int)overflow_check;
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

long long	ft_atoll(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		if (result != (result * 10 + *str - '0') / 10)
			return (LLONG_MAX);
		str++;
	}
	return (result * sign);
}
