/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptative_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:24:44 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/10 12:24:49 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	adaptative_sort(t_stack **b, t_stack **a)
{
	t_stack	*current;
	t_stack	*cmp;
	t_stack *start;
	int	changes;	

	changes = 0;
	while (changes > 0 && *b != NULL)
	{
		if (*b == NULL)
		{		
			changes = 0;
			start = *a;
			current = start;
			cmp = (*a)->next;
		while(current->next != NULL && cmp)
		{
			if(current->number > cmp->number)
			{
				push(current, b);
				pb++;	
				changes++;
			}
		}
		if (changes == 0) 
			return ;
	}
	if (*a == NULL)
		while(curre
	}
}	
		
