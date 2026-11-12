/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 07:57:33 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/12 08:17:22 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	simple_sort_two(t_stack **a, t_opscount *counter)
{
	if (stack_len(*a) == 1)
		return ;
	else
	{
		while (*a)
		{
			if ((*a)->number > (*a)->next->number)
			{
				swap(a);
				counter->sa++;
			}
			*a = (*a)->next;
		}
	}
}

static void	simple_sort_three(t_stack **a, t_opscount *counter)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;
	t_stack	*current;

	first = *a;
	second = (*a)->next;
	third = second->next;
	current = NULL;
	if (first > second && second > third)
	{
		reverse_rot(a);
		swap(a);
		counter->rra++;
		counter->sa++;
	}
	if (first < second && second > third)
	{
		rotate_up(a);
		swap(a);
		counter->ra++;
		counter->sa++;
	}
	if (first < second && second > third)
	{
		rotate_up(a);
		counter->ra++;
	}
}

static void	simple_sort_big(t_stack **b, t_stack **a, t_opscount *counter)
{
	int	changes;

	if (!a || !*a || !b)
		return ;
	changes = 1;
	while (changes > 0)
	{
		changes = 0;
		while (*a && (*a)->next)
		{
			if ((*a)->number > (*a)->next->number)
			{
				swap(a);
				counter->sa++;
				changes++;
			}
			push(b, a);
			counter->pb++;
		}
		if (*a)
		{
			push(b, a);
			counter->pb++;
		}
		while (*b && (*b)->next)
		{
			if ((*b)->number > (*b)->next->number)
			{
				swap(b);
				counter->sb++;
				changes++;
			}
			push(a, b);
			counter->pa++;
		}
		if (*b)
		{
			push(a, b);
			counter->pa++;
		}
	}
}

void	simple_sort(t_stack **b, t_stack **a, t_opscount **counter)
{
	if (!a || !b)
		return ;
	if (stack_len(a) > 3)
		simple_sort_big(b, a, counter);
	if (stack_len(a) == 2)
		simple_sort_two(a, counter);
	if (stack_len(a) == 3)
		simple_sort_three(a, counter);
}
