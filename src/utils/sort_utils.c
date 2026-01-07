/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:37:46 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/07 19:04:21 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	bring_to_top(t_stack **stack)
{
	t_stack	*tmp;
	int		stack_len;
	int		min_index;
	int		count;

	stack_len = stack_size(*stack);
	min_index = find_min(*stack);
	tmp = *stack;
	count = 0;
	while (tmp->value != min_index)
	{
		tmp = tmp->next;
		count++;
	}
	//printf("%d\n", min_index);
	while ((*stack)->value != min_index)
	{
		if (count > (stack_len / 2))
			rra(stack);
		else
			ra(stack);
	}
}
