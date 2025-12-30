/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:54:21 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 16:18:34 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../../inc/push_swap.h"

t_stack		*new_stack_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = value;
	node->a = 0;
	node->b = 0;
	node->size_a = 0;
	node->size_b = 0;
	node->index = 0;
	node->chunk_size = 0;
	node->chunk_min = 0;
	node->chunk_max = 0;
	node->max_bits = 0;
	node->next = NULL;
	return (node);
}

int	stack_size(t_stack *stack)
{
	int	i;
	
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	*stack_to_array(t_stack *stack, int size)
{
	int	*array;
	int	i;

	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (stack)
	{
		array[i] = stack->value;
		stack = stack->next;
	}
	return (array);
}

void	sort_array(int *array, int size)
{
	int	i;
	int	tmp;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

void	assign_index(t_stack *stack, int *array, int size)
{
	int	i;

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

void	*index_stack(t_stack *stack)
{
	int *array;
	int size;

	size = stack_size(stack);
	array = stack_to_array(stack, size);
	if (!array)
		return ;
	sort_array(array, size);
	assign_index(stack, array, size);

	free(array);
}
