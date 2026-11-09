/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:06 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 22:12:47 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_stack
{
	int	number;
	s_stack	*next;
}	t_stack;

typedef struct s_ctx
{
	t_stack *a;
	t_stack *b;
	int	n;
	float	disorder;
	int	ops[11];
}	t_ctx;

int	safe_atoi(char *s, int *out);
int	is_valid_int(char *s);
int	parse_args(int argc, char **argv, int *arr);
int	has_duplicates(int *arr, int n);
float	compute_disorder(f_stack *stack);
float	compute_disorder(f_stack *stack);
void	free_stack(t_stack·**stack)$;
void	push(t_stack **dst, t_stack **src);
void	rotate_up(t_stack·**stack);
void	rotate_up_all(t_stack **b, t_stack **a);
void	reverse_rot(t_stack **stack);
void	reverse_rot_all(t_stack **b, t_stack **a);
void	swap(t_stack **stack);
void	swap_all(t_stack **b, t_stack **a);

#endif
