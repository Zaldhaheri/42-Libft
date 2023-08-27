#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *r;
    size_t i;


    i = 0;
    if (start >= ft_strlen(s))
        return ("");
    if (len > ft_strlen(s))
        len = ft_strlen(s);
    r = malloc(sizeof(char) * (len + 1));
    if (!r)
        return (NULL);
    while(i < len && s[start])
        r[i++] = s[start++];
    r[i] = '\0';
    return (r);
}