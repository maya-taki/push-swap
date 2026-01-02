/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 19:29:30 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	*fill_numbers(int ac, char **av, int *int_numbers_size)
{
	char	**str_numbers;
	int		*int_numbers;
	int		size_str_numbers;
	long	tmp_val;

	str_numbers = NULL;
	int_numbers = NULL;
	size_str_numbers = 0;
	if (ac == 2)
		str_numbers = parse_str_args(ac, av, &size_str_numbers);
	else if (ac >= 3)
		str_numbers = parse_args(ac, av, &size_str_numbers);
	if (!str_numbers)
		return (NULL);
	if (!is_valid_number(str_numbers))
		return (NULL);
	tmp_val = ft_atol(str_numbers[i]);
	if (tmp_val < INT_MIN || tmp_val > INT_MAX)
	{
		free(int_numbers);
		return (NULL);
	}
	int_numbers[i] = tmp_val;
	if (is_dupe(tmp_val, &size_str_numbers))
		return (NULL);
	// TODO: Checar INT_MIN e INT_MAX na tranformação do char ** para int *
	// e criar a conversão de char ** str_numbers para int * int_numbers
	// int_numbers = str_numbers_to_int();
	free_str_numbers(str_numbers, size_str_numbers);
	*int_numbers_size = size_str_numbers;
	return (int_numbers);
}

int	push_swap(int *numbers, int numbers_count)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = init_stack(numbers, numbers_count);
	if (!stack_a)
	{
		free(numbers);
		return (error_handler());
	}
	stack_b = init_stack(NULL, 0);
	if (!stack_b)
	{
		free(numbers);
		free_stack(&stack_a);
		return (error_handler());
	}
	// TODO: fazer o is_sorted descomentar apenas se sorting estiver completo
	/*
	if (!is_sorted(stack_a))
	{
		if (stack_a->size_a <= 5)
			simple_sort(stack_a);
		else
		{
			index_stack(stack_a);
			radix_sort(stack_a, stack_b);
		}
	}
	*/
	free(numbers);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

int	main(int ac, char **av)
{
	int	*int_numbers;
	int	int_numbers_size;

	if (ac == 1)
		return (0);
	int_numbers_size = 0;
	int_numbers = fill_numbers(ac, av, &int_numbers_size);
	if (!int_numbers)
		return (error_handler());
	return (push_swap(int_numbers, int_numbers_size));
}
