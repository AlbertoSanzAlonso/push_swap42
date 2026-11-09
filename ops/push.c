/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:52:58 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/09 18:29:49 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_ab(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (!*src || !src)
		return ;
	tmp = *dst;
	*dst = *src;
	(*dst)->next = tmp;
	*src = (*src)->next;
}
