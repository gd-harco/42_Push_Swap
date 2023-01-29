/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:35:51 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/29 13:37:16 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift both stack one element down.
//Last node become the first one
//If one stack is empty or has just one node, does nothing to that stack
void	rrr(t_push_swap *data)
{
	rra(data);
	rrb(data);
}
