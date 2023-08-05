#include "libft.h"

int ft_strncmp(char *str1, char *str2, int n)
{
    int i;

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && i < n - 1)
    {
        if (str1[i] == str2[i])
            i++;
        else
            break;
    }
    return (str1[i] - str2[i]);
}
