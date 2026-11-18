/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:52:58 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/18 18:02:58 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **dst, t_stack **src, char stack)
{
	t_stack	*tmp;

	if (!src || !*src || !dst)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
	if (stack == 'a')
		write(1, "pb\n", 3);
	else
		write(1, "pa\n", 3);
}
