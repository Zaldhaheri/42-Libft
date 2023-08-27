#include "libft.h"
#include <string.h>

char *ft_strnstr(char *str, const char *find, size_t n)
{
    size_t i;
    size_t add;
    size_t len;

    i = 0;
    add = 0;
    len = 0;
    if (!find)
        return (str);
    while (find[len] != '\0')
        len++;
    while (i < n && str[i] != '\0')
    {
        while (str[i + add] == find[add])
            add++;
        if (add == len)
            return (str + i);
        add = 0;
        i++;
    }
    return (0);
}
