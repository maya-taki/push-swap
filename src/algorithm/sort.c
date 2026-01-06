/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:08:39 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/05 16:20:16 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

//if (t_stack->a <= 5)

//TODO: Fazer sort small e radix


static void	sort_two(t_stack **stack_a)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		if  ((*stack_a)->index > (*stack_a)->next->index)
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
	if ((*stack)->index == max_index)
		ra(stack);
	else if ((*stack)->next->index == max_index)
		rra(stack);
	else if (!is_sorted(*stack))
		sa(stack);
}

int		find_max(t_stack **stack);

int		is_sorted(t_stack *stack);

void    bring_to_top(t_stack **stack);

static void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		bring_to_top(stack_a);
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
		pb(stack_a, stack_b)
		bring_to_top(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
void	sort_small(t_stack **stack_a, t_stack **stack _b)
{
	if (->)
}

void	radix_sort(t_stack *a)
{
	
}
