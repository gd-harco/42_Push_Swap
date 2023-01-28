/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:22:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/27 12:22:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_stack	t_stack;

struct s_stack
{
	size_t	index;
	int		value;
	t_stack	*next;
};

void		parse_nb(t_stack **stack_a, int new_argc, char **argv);
char		*ft_strjoin_piscine(int size, char **strs, char *sep);
t_stack		*stack_last(t_stack *stack);
void		stack_add_back(t_stack **stack, t_stack *new);
t_stack		*stack_new(size_t index, char *str);
bool		have_duplicate(char **to_check);
bool		have_non_digit(char **to_check);
long long	ft_atoll(const char *str);
void		sa(t_stack **stack);

#endif
