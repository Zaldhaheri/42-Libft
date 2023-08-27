#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *curr;
    t_list *temp;

    curr = *lst;
    while(curr)
    {   
        temp = curr->next;
        ft_lstdelone(curr, del);
        curr = temp;
    }
    *lst = NULL;
}
