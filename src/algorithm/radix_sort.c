/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:13:52 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/07 21:28:36 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

//TODO: Fazer sort radix

int	get_max_bits(int max_index)
{
	int max_bits;

	max_bits = 0;
	while ((max_index >> max_bits) != 0)	
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		max_index;
	int		max_bits;
	int		i;
	int		j;

	size = stack_size(*stack_a);
	max_index = size - 1;
	max_bits = get_max_bits(max_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while ((*stack_a)->size_b > 0)
			pa(stack_a, stack_b);
		i++;
	}
}
