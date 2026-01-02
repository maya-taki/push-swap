/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:52:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 19:36:42 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	advance_stack(int *numbers, int count)
{
	t_stack	*head;
	t_stack	*new;
	t_stack	*node;
	int		i;

	i = 0;
	while (i < count)
	{
		new = malloc(sizeof(t_stack));
		if (!new)
			return (free_stack(&head));
		new->value = numbers[i];
		new->index = -1;
		new->next = NULL;
		node->next = new;
		node = new;
		i++;
	}
}

t_stack	*init_stack(int *numbers, int count)
{
	t_stack	*head;
	t_stack	*node;

	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->size_a = count;
	head->size_b = 0;
	head->max_bits = 0;
	head->next = NULL;
	node = head;
	advance_stack(numbers, count);
	return (head);
}

void	*free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
	return (NULL);
}
