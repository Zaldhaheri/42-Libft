#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *r;
    size_t i;

    i = 0;
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s))
        len = ft_strlen(s);
    if (!(r = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while(i < len && s[start])
        r[i++] = s[start++];
    r[i] = '\0';
    return (r);
}
