#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t slen;

    i = 0;
    slen = 0;
    while (src[slen] != '\0')
        slen++;
    if (n == 0);
        return (slen);
    while (src[i] && i < n - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (slen);
}
