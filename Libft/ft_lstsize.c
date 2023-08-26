#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t length;

    length = 0;
    while(lst)
    {
        length++;
        lst = lst->next;
    }
    return (length);
}

int main()
{
    t_list * l =  NULL;
	/* 1 */ printf("%d\n", ft_lstsize(l) == 0);
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	/* 2 */ printf("%d\n", ft_lstsize(l) == 1);
	ft_lstadd_front(&l, ft_lstnew((void*)2));
	/* 3 */ printf("%d\n", ft_lstsize(l) == 2);
	write(1, "\n", 1);
}