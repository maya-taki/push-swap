/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 17:46:52 by mtakiyos         ###   ########.fr       */
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

int	push_swap(int *numbers, int numbers_count)
{
	t_stack	*stack;

	stack = init_stack(numbers, numbers_count);
	if (!stack)
	{
		free(numbers);
		return (error_handler());
	}
	if (!is_sorted(stack))
	{
		if (stack->size_a <= 5)
			simple_sort(stack);
		else
		{
			normalize_stack(stack);
			radix_sort(stack);
		}
	}
	free(numbers);
	free_stack(stack);
	return (0);
}

int	main(int ac, char **av)
{
	int	*int_numbers;
	int	*int_numbers_size;

	if (ac == 1)
		return (0);
	int_numbers_size = 0;
	int_numbers = fill_numbers(ac, av, &int_numbers_size);
	if (!int_numbers)
		return (error_handler());
	return (push_swap(int_numbers, &int_numbers_size));
}
