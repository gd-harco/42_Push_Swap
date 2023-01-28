/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:43:17 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 18:09:41 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swap the first 2 node of both stack.
//If one stack is empty or has just one node, does nothing to that stack
void	ss(t_push_swap *data)
{
	sa(data);
	sb(data);
}
