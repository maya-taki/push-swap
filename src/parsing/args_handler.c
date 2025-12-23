/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:17:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/15 17:27:54 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int			ft_is_valid_number(char **str_numbers)
{
	int	i;
	int	j;
	
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

int			ft_is_dupe(char *str_numbers, int numbers_count)
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

char 		*ft_parse_args(int ac, char **av, int *size_str_numbers)
{
	char	**numbers;
	char	*items;
	int		counter;

	counter = 0;
	
	if (ac < 2)
		return (NULL);
	if (ac == 2)
	{
		numbers = ft_split(av[1], ' ');
		if (numbers == 0)
			return (NULL);
		items = 0;
		while (numbers[counter])
			counter++;
		if (counter == 0)
		{
			free(numbers);
			return (NULL);
		}
		size_str_numbers = ft_len_str_numbers(numbers);
		free(numbers);
	}
	return (numbers);
}