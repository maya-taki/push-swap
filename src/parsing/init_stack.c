/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:52:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/29 16:53:25 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static	t_stack	*build_stack(char **numbers)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	stack = NULL;
	i = 0;
	while (numbers[i])
	{
		node = new_stack_node(ft_atol(numbers[i]));
		if (!node)
		{
			free_stack(stack);
			return (NULL);
		}
		stack_add_back(&stack, node);
		i++;
	}
	return (stack);
}

t_stack	*init_stack(int ac, char **av)
{
	t_stack	*stack;
	char 	**numbers;

	if (ac < 2)
		return (NULL);
	numbers = parse_args(ac, av);
	if (!numbers)
		return (NULL);
	if (!is_valid_number(numbers))
		return (error_handler());
	if (is_dupe(numbers))
		return (error_handler());
	stack = build_stack(numbers);
	if (ac == 2)
		numbers = memory_cleaner(numbers, 0);
	return (stack);
}