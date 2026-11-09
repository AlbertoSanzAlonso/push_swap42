/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:06 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 16:38:08 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_stack
{
	int	content;
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

#endif
