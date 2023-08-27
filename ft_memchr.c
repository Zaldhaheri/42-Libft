#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)str;
    while (i < n)
    {
        if (ptr[i] == (unsigned char) c)
                return ((void *) (ptr + i));
        i++;
    }
    return (NULL);
}
