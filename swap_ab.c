/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:52:58 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 17:01:59 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	
	if (!*a || !*b)
		return ;
	tmp->content = a->content;
	tmp->next = a->tmp;
	a->content = b->content;
	a->next = b->next;
	b->content = tmp->content;
	b->next = tmp->next;
	free_node(tmp);
}
