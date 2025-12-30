/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:17:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 11:15:17 by mtakiyos         ###   ########.fr       */
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

char 		**parse_str_args(int ac, char **av, int *size_str_numbers)
{
	
	char	**str_numbers;
	
	
	str_numbers = ft_split(ac - 1, ' ');
	if (str_numbers[0] == NULL)
		free(str_numbers);
		return (NULL);
	
	*size_str_numbers = is_valid_number(str_numbers);
	return (str_numbers);
}

char		**parse_args(int ac, char **av, int *size_str_numbers)
{
	char	**str_numbers;
	int		av_len;
	int		i;

	av_len = 0;
	i = 1;
	str_numbers = ft_calloc(ac, sizeof(char *));
	while (i < ac)
	{
		av_len = ft_strlen(av[i]) + 1;
		str_numbers[i - 1] = ft_calloc(av_len, sizeof(char));
		ft_strlcpy(str_numbers[i - 1], av[i], av_len);
		i++;
	}
	str_numbers[i - 1] = NULL;
	*size_str_numbers = is_valid_number(str_numbers);
	return (str_numbers);
	
}