#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)str;
    while (i < n && ptr[i] != '\0' && ptr[i] != c)
        i++;
    if (i == n)
        return (NULL);
    return ((void *) (ptr + i));
}
