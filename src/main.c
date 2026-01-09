/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/09 20:22:02 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	convert_and_validate(char **str_numbers, int size, int *int_numbers)
{
	int		i;
	long	tmp_value;

	i = 0;
	while (i < size)
	{
		tmp_value = ft_atol(str_numbers[i]);
		if (tmp_value < INT_MIN || tmp_value > INT_MAX)
			return (0);
		int_numbers[i] = tmp_value;
		i++;
	}
	return (1);
}

static void	*free_int_numbers(int *int_numbers)
{
	free(int_numbers);
	return (NULL);
}

static int	*fill_numbers(int ac, char **av, int *int_numbers_size)
{
	char	**str_numbers;
	int		*int_numbers;
	int		size_str_numbers;

	str_numbers = NULL;
	int_numbers = NULL;
	size_str_numbers = 0;
	if (ac == 2)
		str_numbers = parse_str_args(ac, av, &size_str_numbers);
	else if (ac >= 3)
		str_numbers = parse_args(ac, av, &size_str_numbers);
	if (!str_numbers || !is_valid_number(str_numbers))
		return (NULL);
	int_numbers = ft_calloc(size_str_numbers + 1, sizeof(int));
	if (!int_numbers)
		return (NULL);
	if (!convert_and_validate(str_numbers, size_str_numbers, int_numbers))
		return (free_int_numbers(int_numbers));
	if (is_dupe(int_numbers, size_str_numbers))
		return (free_int_numbers(int_numbers));
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
	stack_b = NULL;
	if (!is_sorted(stack_a))
	{
		if (stack_a->size_a <= 5)
			sort_small(&stack_a, &stack_b);
		else
		{
			normalize_stack(stack_a);
			radix_sort(&stack_a, &stack_b);
		}
	}
	free(numbers);
	free_stack(stack_a);
	free_stack(stack_b);
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
