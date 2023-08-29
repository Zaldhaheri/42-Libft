#include "libft.h"

char *ft_strnstr(char *str, const char *find, size_t n)
{
    size_t len;

    len = 0;
    if (find == "")
        return ((char *)str);
    if (n == 0)
        return (NULL);
    while (find[len] != '\0')
        len++;
    while (len <= n && *str)
    {
        if (!(ft_strncmp(str, (char *)find, len)))
            return (str);
        str++;
        n--;
    }
    return (NULL);
}
