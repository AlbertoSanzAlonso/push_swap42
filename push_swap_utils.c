/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:04:21 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 17:12:07 by asanz-al         ###   ########.fr       */
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
