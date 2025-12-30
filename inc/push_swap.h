/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 03:39:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/29 17:24:12 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef	struct s_stack
{
	t_stack			*a;
	t_stack			*b;

	int				size_a;
	int				size_b;

	long			value;
	int 			index;

	int				chunk_size;
	int				chunk_min;
	int				chunk_max;

	int				max_bits;
	struct	s_stack *next;
}	t_stack;

//move
static int		push(t_stack **dest, t_stack **src);
void			pa(t_stack **stack_a, t_stack **stack_b);
void			pb(t_stack **stack_a, t_stack **stack_b);

static int 		rrotate(t_stack **stack);
void			rra(t_stack **stack_a);
void			rrb(t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);

static int 		rotate(t_stack **stack);
void			ra(t_stack **stack_a);
void			rb(t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);

static int	 	swap(t_stack **stack);
void			sa(t_stack **stack_a);
void			sb(t_stack **stack_b);
void			ss(t_stack **stack_a, t_stack **stack_b);

int				is_valid_number(char **str_numbers);
int				is_dupe(char *str_numbers, int numbers_count);
char 			**parse_args(int ac, char **av);

static	t_stack	*build_stack(char **numbers);
t_stack			*init_stack(int ac, char **av);




t_stack			*error_handler(void);


#endif