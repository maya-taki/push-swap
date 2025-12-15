/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:17:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/14 17:02:00 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	parse_args(int ac, char **av)
{
	char	**str_nbrs;

	str_nbrs = ft_split(av[ac - 1], ' ');
	if (str_nbrs[0] == 0)
	{
		free(str_nbrs);
		return (NULL);
	}
}
