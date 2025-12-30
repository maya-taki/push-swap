/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:54:21 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/29 17:46:11 by mtakiyos         ###   ########.fr       */
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

7\\\\\\\\\.
