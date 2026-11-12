/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:06 by asanz-al          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/11/09 22:09:36 by asanz-al         ###   ########.fr       */
=======
/*   Updated: 2026/11/10 13:55:50 by asanz-al         ###   ########.fr       */
>>>>>>> e260b4928f2e02ca82245034f38814cdbdd47b0a
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "lib/ft_printf.h"

typedef	struct	s_stack
{
	int	number;
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
    int    rrb;
    int    rrr;
}    t_opscount

int	safe_atoi(char *s, int *out);
int	is_valid_int(char *s);
int	parse_args(int argc, char **argv, int *arr);
int	has_duplicates(int *arr, int n);
float	compute_disorder(f_stack *stack);
void	free_stack(t_stack·**stack)$;
void	push(t_stack **dst, t_stack **src);
void	rotate_up(t_stack·**stack);
float	compute_disorder(t_stack *stack);
void	free_stack(t_stack **stack);
void	push(t_stack **dst, t_stack **src);
void	rotate_up(t_stack **stack);
void	rotate_up_all(t_stack **b, t_stack **a);
void	reverse_rot(t_stack **stack);
void	reverse_rot_all(t_stack **b, t_stack **a);
void	swap(t_stack **stack);
void	swap_all(t_stack **b, t_stack **a);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
int	ft_printf(const char *format, ...);
void  simple_sort(t_stack **b, t_stack **a, t_opscount *counter);
int    stack_len(t_stack *stack);

#endif
