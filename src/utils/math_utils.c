/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:59:35 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/07 19:05:40 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	find_max(t_stack *stack)
{
	int	max_index;

	max_index = stack->value;
	while (stack)
	{
		if (max_index < stack->value)
			max_index = stack->value;
		stack = stack->next;
	}
	return (max_index);
}

int	find_min(t_stack *stack)
{
	int	min_index;

	min_index = stack->value;
	while (stack)
	{
		if (min_index > stack->value)
			min_index = stack->value;
		stack = stack->next;
	}
	return (min_index);
}

