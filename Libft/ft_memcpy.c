#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest1;
    unsigned char *src1;

    i = 0;
    if (!dest && !src)
        return(0);
    dest1 = dest;
    src1 = (unsigned char *)src;
    while (i < n)
    {
        *dest1++ = *src1++;
        i++;
    }
    return (dest);
}
