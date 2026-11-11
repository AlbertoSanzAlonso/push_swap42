#include "../push_swap.h"

void  simple_sort(t_stack **b, t_stack **a, t_opscount *counter)
{
    int    changes;
    
    if (!a || !*a || !b)
        return ;
    changes = 1;
    while (changes > 0)
    {
        changes = 0;
        while (*a && (*a)->next)
        {
            if ((*a)->content > (*a)->next->content)
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
            if ((*b)->content > (*b)->next->content)
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
