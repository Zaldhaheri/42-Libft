#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int s;
    int r;

    i = 0;
    r = 0;
    s = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            s *= -1;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r *= 10;
        r += str[i++] - '0';
    }
    return (r * s);
}