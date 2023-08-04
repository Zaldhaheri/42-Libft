#include "libft.h"

char *ft_strchr(const char *str, char c)
{
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
