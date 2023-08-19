#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *r;
    size_t rlen;
    size_t i;
    size_t j;
    int flag;

    flag = 1;
    i = 0;
    rlen = 0;
    while (s1[i])
    {
        while(set[j])
        {
            if (s1[i] == set[j])
                flag = 0;
            j++;
        }
        if (flag)
            rlen++;
        j = 0;
        i++;
    }
    return (r);
}