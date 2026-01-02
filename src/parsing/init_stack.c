/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:52:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 16:52:25 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*init_stack(int *numbers, int count)
{
	t_stack	*head;
	t_stack	*node;
	t_stack	*new;
	int		i;

	head = malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->size_a = count;
	head->size_b = 0;
	head->max_bits = 0;
	head->next = NULL;
	node = head;
	i = 0;
	while (i < count)
	{
		// colocar tudo isso em uma função separada
		// começa aqui não esquecer de mover as variaveis também
		new = malloc(sizeof(t_stack));
		if (!new)
			return (free_stack(&head));
		new->value = numbers[i];
		new->index = -1;
		new->next = NULL;
		node->next = new;
		node = new;
		// termina aqui
		i++;
	}
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