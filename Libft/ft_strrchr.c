#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    (char) c;
    while(*str)
    {
        if (*str == c)
            break;
        str++;
    }
    if (*str == c)
        return ((char*) str);
    return (NULL);
}