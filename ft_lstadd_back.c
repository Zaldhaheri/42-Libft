#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr;

    curr = *lst;
    if (!curr)
    {
        *lst = new;
        return;
    }
    while(curr->next)
        curr = curr->next;
    curr->next = new;
}
