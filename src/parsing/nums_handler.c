/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nums_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:12:25 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 17:12:41 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int			is_valid_number(char **str_numbers)
{
	int		i;
	int		j;
	
	i = 0;
	while (str_numbers[i])
	{
		j = 0;
		if (str_numbers[i] == '+' || str_numbers[i] == '-')
			i++;
		if (!str_numbers[i][j])
			return (NULL);
		if (str_numbers[i][j] >= '0' && str_numbers[i][j] <= '9')
			j++;
		else
			return (0);
		i++;		
	}
	return (1);
}

int			is_dupe(char *str_numbers, int numbers_count)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str_numbers)
		return (NULL);
	while (i < numbers_count)
	{
		j = i + 1;
		while (j < numbers_count)
		{
			if (str_numbers[i] == str_numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);	
}