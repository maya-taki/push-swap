/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:54:21 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/09 18:37:10 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	stack_size(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack && stack->next)
	{
		stack = stack->next;
		i++;
	}
	return (i + 1);
}

int	*stack_to_array(t_stack *stack, int size)
{
	t_stack	*node;
	int		*array;
	int		i;

	i = 0;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	node = stack;
	while (node)
	{
		array[i] = node->value;
		node = node->next;
		i++;
	}
	return (array);
}

void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			i++;
		}
		j++;
	}
}

void	assign_index(t_stack *stack, int *array, int size)
{
	int	i;

	i = 0;
	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] == stack->value)
			{
				stack->index = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
}

void	*normalize_stack(t_stack *stack)
{
	int	*array;
	int	size;

	size = stack_size(stack);
	array = stack_to_array(stack, size);
	if (!array)
		return (NULL);
	sort_array(array, size);
	assign_index(stack, array, size);
	free(array);
	return (array);
}
