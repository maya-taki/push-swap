/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:31:50 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/28 13:10:21 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int rrotate(t_stack **stack)
{
	t_stack	*first;
	t_stack *last;

	if (stack && *stack && (*stack)->next)
	{
		first = *stack;
		last = *stack;
		while (last->next)
			last = last->next;
		while (first->next != last)
			first = first->next;
		last->next = *stack;
		first->next = NULL;
		*stack = last;
		return (1);
	}
	return (0);
}

void	rra(t_stack **stack_a)
{
	if (rrotate(stack_a))
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **stack_b)
{
		if (rrotate(stack_b))
			ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (rrotate(stack_a) || rrotate(stack_b))
		ft_putstr_fd("rrr\n", 1);
}