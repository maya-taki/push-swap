/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 03:39:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/12/30 16:25:50 by mtakiyos         ###   ########.fr       */
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
	int			*a;
	int			*b;

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
char 			**parse_args(int ac, char **av, int *size_str_numbers);
char 			**parse_str_args(int ac, char **av, int *size_str_numbers);

static	t_stack	*build_stack(char **numbers);
t_stack			*init_stack(int ac, char **av);


t_stack			*new_stack_node(int value);
int				stack_size(t_stack *stack);
int				*stack_to_array(t_stack *stack, int size);
void			sort_array(int *array, int size);
void			assign_index(t_stack *stack, int *array, int size);
void			*index_stack(t_stack *stack);


t_stack			*error_handler(void);


#endif