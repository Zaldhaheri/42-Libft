#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    void *r;

    r = malloc(size * nitems);
    ft_bzero(r, size * nitems);
    return (r);
}