/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:12:25 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 18:04:25 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	is_valid_number(char **str_numbers)
{
	int	i;
	int	j;

	i = 0;
	while (str_numbers[i])
	{
		j = 0;
		if (str_numbers[i][j] == '+' || str_numbers[i][j] == '-')
			i++;
		if (!str_numbers[i][j])
			return (0);
		if (str_numbers[i][j] >= '0' && str_numbers[i][j] <= '9')
			j++;
		else
			return (0);
		i++;
	}
	return (1);
}

int	is_dupe(int *int_numbers, int numbers_count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!int_numbers)
		return (0);
	while (i < numbers_count)
	{
		j = i + 1;
		while (j < numbers_count)
		{
			if (int_numbers[i] == int_numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
