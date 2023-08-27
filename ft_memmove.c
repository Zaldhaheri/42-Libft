#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    char *dest;
    char *src;
    size_t i;

    dest = (char *)str1;
    src = (char *)str2;
    i = n;
    if (!dest && !src)
        return (0);
    if (dest > src)
    {
        while (i--)
            dest[i] == src[i];
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}