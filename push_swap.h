/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:06 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/10 13:55:50 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include "lib/ft_printf.h"

typedef	struct	s_stack
{
	int	number;
	struct s_stack	*next;
}	t_stack;

typedef enum e_strategy
{
	STRAT_ADAPTIVE,
	STRAT_SIMPLE,
	STRAT_MEDIUM,
	STRAT_COMPLEX
}	t_strategy;

typedef struct s_ctx
{
	t_stack		*a;
	t_stack		*b;
	int			n;
	float		disorder;
	int			ops[11];
	t_strategy	strategy;
	int			bench;
}	t_ctx;

int		safe_atoi(char *s, int *out);
int		is_valid_int(char *s);
int		parse_args(int argc, char **argv, int *arr);
int		has_duplicates(int *arr, int n);
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
int		ft_printf(const char *format, ...);
int		count_total(int argc, char **argv);
int		parse_one(char *arg, int *arr, int *k);
int		counted_args(char *s);
int		parse_args(int argc, char **argv, int *arr);
int		is_valid_int(char *s);
int		safe_atoi(char *s, int *out);
int		has_duplicates(int *arr, int n);
void	free_split(char **s);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_strcmp(const char *s1, const char *s2);

// flags

int	set_flag(char *s, t_ctx *ctx);
int	parse_flags(int argc, char **argv, t_ctx *ctx);

#endif
