/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:32:51 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:30:29 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack, char letter)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	current = *stack;
	while (current && current->next != NULL)
		current = current->next;
    *stack = (*stack)->next;
    current->next = tmp;
    tmp->next = NULL;
	if (letter == 'a')
		write(1, "ra\n", 3);
	else
		write(1, "rb\n", 3);
}

void	rotate_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !(*a)->next || !b || !*b || !(*b)->next)
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}

void	rotate_rev(t_stack **stack, char letter)
{
	t_stack *last;
	t_stack *second_last;

	if (!stack || !*stack || !(*stak)->next)
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
	if (letter == 'a')
		write(1, "rra\n", 4);
	else
		write(1, "rrb\n", 4);
}

void	rotate_rev_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !(*a)->next || !b || !*b || !(*b)->next)
		return ;
	rotate_rev(a);
	rotate_rev(b);
	write(1, "rrr\n", 4);
}
