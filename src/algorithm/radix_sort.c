/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:13:52 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/06 17:09:44 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	get_max_bits(int max_index)
{
	int max_bits;

	max_bits = 0;
	while ((max_index >> max_bits) != 0)	
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int		size;
	int		max_index;
	int		max_bits;
	t_stack	*top_node;
	int		i;
	int		j;

	(void)stack_a;
	(void)stack_b;
}
