/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:43:17 by gd-harco          #+#    #+#             */
/*   Updated: 2023/01/28 18:23:16 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Shift both stack one element up.
//First node become last one
//If one stack is empty or has just one node, does nothing to that stack
void	rr(t_push_swap *data)
{
	ra(data);
	rb(data);
}
