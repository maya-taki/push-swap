/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:21:41 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/02 16:49:36 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	error_handler(void)
{
	ft_putstr_fd("Error/n", 2);
	return (1);
}

void	*free_str_numbers(char **s, size_t i)
{
	while (i > 0)
		free(s[--i]);
	free(s);
	s = NULL;
	return (NULL);
}