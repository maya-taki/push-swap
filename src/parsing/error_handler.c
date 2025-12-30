/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:21:41 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 17:11:13 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*error_handler(void)
{
	ft_putstr_fd("Error/n", 2);
	return (1);
}

void	free_stack(t_stack **stack)
{
	t_stack *tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	free_str_numbers(char **s, size_t i)
{
	while (i > 0)
		free(s[--i]);
	free(s);
	s = NULL;
	return (NULL);
}