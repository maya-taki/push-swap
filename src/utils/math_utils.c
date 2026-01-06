/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:59:35 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/05 17:46:11 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	find_max(t_stack *stack)
{
	int	max_index;

	max_index = stack->index;
	while (stack)
	{
		if (max_index < stack->next->index)
			max_index = stack->next->index;
		stack = stack->next;
	}
}

int	find_min(t_stack *stack)
{
	int	min_index;

	min_index = stack->index;
	while (stack)
	{
		if (min_index > stack->index)
			min_index == stack->index;
		stack = stack->next;
	}
	return (min_index);
}