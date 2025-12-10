/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:01:49 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/10 11:20:52 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long	res;
	int		sign;
		
	sign = 0;
	while (*nptr)
	{
		if ((*nptr >= 9 || *nptr <= 13) && *nptr == 32)
			nptr++;
		if (*nptr == '+' || *nptr == '-')
		{
			if (*nptr == '-')
				sign = -1;
			nptr++;
		}
		if (*nptr >= '0' && *nptr <= '9')
		{
			res = res * 10 + (*nptr - '0');
			nptr++;
		}
	}
	return (sign * res);
}