#include "libft.h"

char *ft_strchr(const char *str, char c)
{
    while(*str)
    {
        if (*str == c)
            break;
        str++;
    }
    return ((char *)str);
}

int main()
{
    printf("%d ", ft_strchr("Hello world", 'w'));
    return (0);
}