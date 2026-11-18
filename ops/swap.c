/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:37:20 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:29:44 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack, char letter)
{
	t_stack	*first;
	t_stack *second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (letter == 'a')
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}

void	swap_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !b || !*b)
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
