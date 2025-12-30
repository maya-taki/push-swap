/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_spit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:34:51 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 16:35:53 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	free_str_numbers(char **s, size_t i)
{
	while (i > 0)
		free(s[--i]);
	free(s);
	s = NULL;
	return (NULL);
}