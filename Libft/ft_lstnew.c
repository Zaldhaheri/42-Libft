#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *root;

    if(!(root = malloc(sizeof(t_list))))
        return (NULL);
    root->content = content;
    root->next = NULL;

    return(root);
}
