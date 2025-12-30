/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/29 17:46:13 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;

	if (ac == 1)
		error_handler();
	stack_a = NULL;
	stack_b = NULL;
	stack_a = init_stack(ac, av);
	
	if (ac == 2)
		num = atol(av[1]);
	if (num > INT_MIN || num < INT_MAX)
		error_handler();
}