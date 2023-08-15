#include "libft.h"

char *ft_strdup(const char *str)
{
    char *dup;
    int i;

    i = 0;
    if (!(dup = (char *) malloc(ft_strlen(str) + 1)))
        return (NULL);
    while (str[i])
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}