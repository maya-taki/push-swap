/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:17:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 19:36:38 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	str_numbers_size(char **str_numbers)
{
	int	i;

	i = 0;
	while (str_numbers[i])
		i++;
	return (i);
}

char	**parse_str_args(int ac, char **av, int *size_str_numbers)
{
	char	**str_numbers;

	str_numbers = ft_split(av[ac - 1], ' ');
	if (str_numbers[0] == NULL)
	{
		free(str_numbers);
		return (0);
	}
	*size_str_numbers = str_numbers_size(str_numbers);
	return (str_numbers);
}

char	**parse_args(int ac, char **av, int *size_str_numbers)
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
	*size_str_numbers = str_numbers_size(str_numbers);
	return (str_numbers);
}
