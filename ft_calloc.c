#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *r;

    if (!(r = malloc(size * nitems)))
        return (NULL);
    ft_bzero(r, size * nitems);
    return (r);
}