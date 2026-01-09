/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 03:39:27 by mtakiyos          #+#    #+#             */
/*   Updated: 2026/01/09 18:35:29 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	int				size_a;
	int				size_b;

	long			value;
	int				index;

	int				max_bits;
	struct s_stack	*next;
}	t_stack;

void			pa(t_stack **stack_a, t_stack **stack_b);
void			pb(t_stack **stack_a, t_stack **stack_b);
void			rra(t_stack **stack_a);
void			rrb(t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);
void			ra(t_stack **stack_a);
void			rb(t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);
void			sa(t_stack **stack_a);
void			sb(t_stack **stack_b);
void			ss(t_stack **stack_a, t_stack **stack_b);

int				is_valid_number(char **str_numbers);
int				is_dupe(int *int_numbers, int numbers_count);
char			**parse_args(int ac, char **av, int *size_str_numbers);
char			**parse_str_args(int ac, char **av, int *size_str_numbers);
t_stack			*init_stack(int *numbers, int count);
t_stack			*new_stack_node(int value);
int				stack_size(t_stack *stack);
int				*stack_to_array(t_stack *stack, int size);
void			sort_array(int *array, int size);
void			assign_index(t_stack *stack, int *array, int size);
void			*normalize_stack(t_stack *stack);
int				error_handler(void);
void			free_stack(t_stack *stack);
void			*free_str_numbers(char **s, size_t i);
void			sort_small(t_stack **stack_a, t_stack **stack_b);
int				find_max(t_stack *stack);
int				find_min(t_stack *stack);
int				is_sorted(t_stack *stack);
void			bring_to_top(t_stack **stack);

void			radix_sort(t_stack **stack_a, t_stack **stack_b);

#endif