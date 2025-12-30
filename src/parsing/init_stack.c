/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:52:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 11:54:33 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static	t_stack	*alloc_stack(int numbers_count)
{
	t_stack	*stack;
	
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a = malloc(sizeof(int) * numbers_count);
	if (!stack->a)
	{
		free(stack);
		return (NULL);
	}
	stack->b = malloc(sizeof(int) * numbers_count);
	if (!stack->b)
	{
		free(stack->a);
		free(stack);
		return (NULL);
	}
	return (stack);
}

t_stack	*init_stack(int *numbers, int numbers_count)
{
	t_stack	*stack;
	int i;
	
	stack = alloc_stack(numbers_count);
	if (!stack)
		return (NULL);
	i = 0;
	while (i < numbers_count)
	{
		stack->a[i] = numbers[i];
		i++;
	}
	stack->size_a = numbers_count;
	stack->size_b = 0;
	return (stack);
}