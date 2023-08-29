#include "libft.h"

size_t count_word(char const *s, char c)
{
    size_t d;

    d = 0;
    while(*s)
    {
        if (*s != c)
        {
            d++;
            while(*s && *s != c)
                s++;
        }
        else
            s++;
    }
    return (d);
}

char **ft_split(char const *s, char c)
{
    size_t len;
    size_t j;
    char **r;

    j = 0;
    if (!s)
        return (NULL);
    if (!(r = malloc (sizeof(char *) * (count_word(s, c) + 1))) || !s)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            len = 0;
            while (*s && *s != c && ++len)
                s++;
            r[j++] = ft_substr(s - len, 0, len);
        }
        else
            s++;
    }
    r[j] = NULL;
    return (r);
}
