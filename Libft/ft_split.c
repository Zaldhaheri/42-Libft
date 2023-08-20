#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t d;
    size_t len;
    size_t j;
    char **r;

    d = 0;
    i = 0;
    len = 0;
    j = 0;
    while(s[i])
    {
        if (s[i] != c)
        {
            d++;
            while(s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    r = malloc (sizeof(char *) * d);
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            len = 0;
            while (s[i] && s[i] != c)
            {
                len++;
                i++;
            }
            r[j++] = ft_substr(s + i - len, 0, len);
        }
        else
            i++;
    }
    return (r);
}
