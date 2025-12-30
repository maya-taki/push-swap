/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 16:36:51 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	*fill_numbers(int ac, char **av, int **int_numbers_size)
{
	char	**str_numbers;
	int		*int_numbers;
	int		size_str_numbers;

	str_numbers = NULL;
	size_str_numbers = 0;
	if (ac == 2)
		str_numbers = parse_str_args(ac, av, &size_str_numbers);
	else if (ac >= 3)
		str_numbers = parse_args(ac, av, &size_str_numbers);
	if (!str_numbers)
		return (NULL);
	if (!is_valid_number)
		return (NULL);
	free_str_numbers(str_numbers, size_str_numbers);
	*int_numbers_size = size_str_numbers;
	return (int_numbers);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b;

	int		num;

	num = 0;	
	if (ac == 1)
		error_handler();
	stack_a = NULL;
	stack_b = NULL;
	stack_a = init_stack(ac, av);
	
	if (ac == 2)
		num = ft_atol(av[1]);
	if (num > INT_MIN || num < INT_MAX)
		error_handler();
}