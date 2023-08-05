#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *new_str;
    size_t i;

    i = 0;
    new_str = (unsigned char *)str;
    while (i < n && new_str[i] != '\0' && new_str[i] != c)
        i++;
    if (i == n)
        return (NULL);
    return ((void *) (new_str + i));
}
