/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:32:51 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 22:03:01 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_up(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	current = *stack;
	while (current && current->next != NULL)
		current = current->next;
	current->next = tmp;
}

void	rotate_up_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !b || !*b)
		return ;
	rotate_up(a);
	rotate_up(b);
}

void	reverse_rot(t_stack **stack)
{
	t_stack *last;
	t_stack *second_last

	if (!stack || !*stack)
		return ;
	second_last = NULL;
	last = *stack;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	reverse_rot_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !b || !*b)
		return ;
	reverse_rot(a);
	reverse_rot(b);
}
