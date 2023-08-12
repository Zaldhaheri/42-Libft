#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t x;

    i = 0;
    while(dest[x] != '\0')
        x++;
    while (src[i] != '\0' && x > n - 1 && n > 0)
        dest[x++] = src[i++];
    dest[x] = '\0';
    return (x);
}
