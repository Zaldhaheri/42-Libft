#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    i = 0;
    if (!(str = malloc (sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
