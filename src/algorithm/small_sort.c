/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:08:39 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/07 18:58:08 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

//TODO: Fazer sort radix

static void	sort_two(t_stack **stack_a)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			sa(stack_a);
	}
}

static void	sort_three(t_stack **stack)
{
	t_stack	*temp;
	int		max_index;
	int		count;

	if (!stack && !*stack && !(*stack)->next)
		return ;
	max_index = find_max(*stack);
	count = 0;
	if ((*stack)->value == max_index)
		ra(stack);
	if ((*stack)->next->value == max_index)
		rra(stack);
	if (!is_sorted(*stack))
		sa(stack);
}

static void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{	
		bring_to_top(stack_a);
		if (is_sorted(*stack_a))
			return ;
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		bring_to_top(stack_a);
		pb(stack_a, stack_b);
		bring_to_top(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	sort_small(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_len;

	stack_len = stack_size(*stack_a);
	// printf("%d", stack_len);
	if (stack_len == 2)
		sort_two(stack_a);
	else if (stack_len == 3)
		sort_three(stack_a);
	else if (stack_len == 4)
		sort_four(stack_a, stack_b);
	else if (stack_len == 5)
		sort_five(stack_a, stack_b);
}

