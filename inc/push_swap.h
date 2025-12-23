/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 03:39:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/16 18:10:54 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "libft.h"
#include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef	struct		s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
	
}	t_stack;

typedef struct s_sort
{
	
}	t_sort;

//move

void	swap_a();

//

//



#endif