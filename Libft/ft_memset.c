#include "libft.h"

void *ft_memset(void *str, int x, size_t n)
{
    size_t i;
    unsigned char *new_str;

    i = 0;
    new_str = (unsigned char *) str;
    while (i < n)
        new_str[i++] = x;
    str = new_str;
    return (str);
}
