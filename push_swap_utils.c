/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:04:21 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/10 13:59:24 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack **stack)
{
	t_stack *tmp;

	if (!stack || !*stack)
		return;
	while (*stack)
	{
		tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
    *stack = NULL;
}

float	compute_disorder(t_stack *stack)
{
	float	mistakes;
	float	total_pairs;
	t_stack	*cmp;
	
	mistakes = 0;
	total_pairs = 0;
	while (stack && stack->next)
	{	
		cmp = stack->next;
		total_pairs += 1;
		if(stack->number > cmp->number)
			mistakes += 1;
		stack = stack->next;
	}
	if (total_pairs == 0)
		return (0);
	return (mistakes / total_pairs);
}
