#include "../push_swap.h"

void  simple_sort(t_stack **b, t_stack **a)
{
    t_stack *cmp;
    int    changes;
    
    if (!a || !*a || !b)
        return ;
    cmp = NULL;
    changes = 1;
    while (changes > 0)
    {
        changes = 0;
        while (*a && (*a)->next)
        {
            cmp = (*a)->next;
            if ((*a)->content > cmp->content)
            {
                swap(a);
                sa++;
                changes++;
            }
            push(b, a);
            pb++;
            changes++;
            }
        }
        if (*a)
        {
            push(b, a);
            pb++;
        }
         while (*b && (*b)->next)
        {
            if ((*b)->content > b->content)
            {
                swap(b);
                sb++;
                changes++;
            }
            push(a, b);
            pa++;
            changes++;
            }
        }
        if (*b)
        {
            push(a, b);
            pb++;
        }
    }
