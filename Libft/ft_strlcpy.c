#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n - 1 && src[i] != '\0' && n > 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}
