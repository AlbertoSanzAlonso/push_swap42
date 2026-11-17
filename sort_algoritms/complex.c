/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 20:27:30 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/16 20:38:23 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void stack_index(t_stack **node)
{
	t_stack *current;
	t_stack	*cmp;
    t_stack *first;
	
    if (!node || !*node)
        return ;
	cmp = *node;
    current = *node;
    first = *node; 
	while(current)
    {
	    current->rel_pos = 0;
        while(cmp)
        {
            if (cmp->number < current->number)
                current->rel_pos++;
            cmp = cmp->next;
        }
    cmp = first;
    current = current->next;
    }
}

static int count_bits(int nb)
{
    int    bits_size;

    bits_size = 0;
    while(nb)
    {
        nb = nb / 2;
        bits_size++;
    }
    return (bits_size);
}

static int get_max_bits(t_stack **node)
{
    t_stack    *current;
    t_stack    *bigger;
    int    max_bits;

    max_bits = 0;
    if (!node || !*node)
        return (0);
    current = *node;
    bigger = current;
    while(current)
    {
        if(current->rel_pos > bigger->rel_pos)
            bigger = current;
        current = current->next;
    }
    max_bits = count_bits(bigger->rel_pos);
    return (max_bits);
}

void    complex_sort(t_stack **a, t_stack **b, t_opscount *ops_counter, int max_bits)
{
    int    bits_pos;
    t_stack    *current;

    if(!a || !*a | !b)
        return ;
    bits_pos = 0;
    current = *a;
    while (bits_pos < max_bits)
    {
        while (current)
        {
            if ((current->pos_rel >> bits_pos & 1) == 0)
            {
                push(b, a);
                ops_counter->pa;
            }
            else
            {
                reverse_rot(a);
                ops_counter->rra;
            }
        current = current->next;
        }
        bits_pos++;
    }
}
            

