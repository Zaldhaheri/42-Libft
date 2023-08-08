#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t x;

    i = 0;
    while(dest[x] != '\0')
        x++;
    while (src[i] != '\0' && x > n - 1 && n > 0)
        dest[x++] = src[i++];
    dest[x] = '\0';
    return (x);
}

int main()
{
    char src[20] = "hello";
    char dest[20] = "world";
    ft_strlcat(dest, src, 10);
    printf("%s\n", dest);
}