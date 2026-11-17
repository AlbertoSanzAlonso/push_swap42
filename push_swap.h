/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:06 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 22:09:36 by asanz-al         ###   ########.fr       */
/*   Updated: 2026/11/10 13:55:50 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "lib/ft_printf.h"

// Types

typedef	struct	s_stack
{
	int	number;
    int rel_pos;
	struct s_stack	*next;
}	t_stack;

typedef struct s_ctx
{
	t_stack *a;
	t_stack *b;
	int	n;
	float	disorder;
	int	ops[11];
}	t_ctx;

typedef struct s_opscount
{
    int    sa;
    int    sb;
    int    ss;
    int    pa;
    int    pb;
    int    ra;
    int    rb;
    int    rr;
    int    rra;
    int    rrr;
}    t_opscount;

// Parsing

int	safe_atoi(char *s, int *out);
int	is_valid_int(char *s);
int	parse_args(int argc, char **argv, int *arr);
int	has_duplicates(int *arr, int n);
float	compute_disorder(f_stack *stack);
void	free_stack(t_stack·**stack);

// Utils

char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
int	ft_printf(const char *format, ...);
int    stack_len(t_stack *stack);

// Operations

void	push(t_stack **dst, t_stack **src);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	rotate_all(t_stack **b, t_stack **a);
void	rotate_rev(t_stack **stack);
void	rotate_rev_all(t_stack **b, t_stack **a);

// Algoritms

void    complex_sort(t_stack **a, t_stack **b, t_opscount *ops_counter, int max_bits);
void  simple_sort(t_stack **b, t_stack **a, t_opscount *counter);

#endif
