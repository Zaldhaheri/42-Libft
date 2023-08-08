#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n - 1 && src[i] != '\0' && n > 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}

// int main()
// {
//     char d1[] = "hello";
//     char s1[] = "world"; 
//     printf("%s\n%s\n", d1, s1);
//     ft_strlcpy(d1, s1, 4);
//     printf("%s\n%s", d1, s1);
//     return (0);
// }