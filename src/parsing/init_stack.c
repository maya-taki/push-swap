/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:52:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/06 15:01:19 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	add_stack(t_stack *head, int *numbers, int count)
{
	t_stack	*new;
	t_stack	*node;
	int		i;

	i = 0;
	node = head;
	while (i < count)
	{
		new = malloc(sizeof(t_stack));
		if (!new)
		{
			free_stack(&head);
			break ;
		}
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

	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->size_a = count;
	head->size_b = 0;
	head->max_bits = 0;
	head->next = NULL;
	add_stack(head, numbers, count);
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
