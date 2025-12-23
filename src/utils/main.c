/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:22:10 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/23 18:43:55 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int ac, char **av)
{
	long int	num;

	if (ac == 1)
		error_handler();
	if (ac == 2)
		num = atol(av[1]);
	if (num > INT_MIN || num < INT_MAX)
		error_handler();
}