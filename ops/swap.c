/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:37:20 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 22:04:32 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack *second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	swap_all(t_stack **b, t_stack **a)
{
	if (!a || !*a || !b || !*b)
		return ;
	swap(a);
	swap(b);
}
