#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *r;
    size_t i;


    i = 0;
    if (start >= ft_strlen(s))
        return ("");
    else if (len > ft_strlen(s))
        len = ft_strlen(s);
    r = malloc(sizeof(char) * (len + 1));
    if (!r)
        return (NULL);
    while(i < len && s[start])
        r[i++] = s[start++];
    r[i] = '\0';
    return (r);
}

int main()
{
    char * s = ft_substr("tripouille", 0, 42000);
	/* 1 */ printf("%d\n", !strcmp(s, "tripouille"));
	/* 2 */ printf("%s %d\n", s, strlen("tripouille") + 1); free(s); 

	s = ft_substr("tripouille", 1, 1);
	/* 3 */ printf("%d\n", !strcmp(s, "r"));
	/* 4 */ printf("%s %d\n", s, 2); free(s); 

	s = ft_substr("tripouille", 100, 1);
	/* 5 */ printf("%d\n", !strcmp(s, ""));
	/* 6 */ printf("%s %d\n", s, 1); free(s); 

	char * str = strdup("1");
	s = ft_substr(str, 42, 42000000);
	/* 7 */ printf("%d\n", !strcmp(s, ""));
	/* 8 */ printf("%s %d\n", s, 1); free(s); free(str); 

	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
	/* 9  mbueno-g */ printf("%d\n", !strcmp(s, "9"));
	/* 10  mbueno-g */ printf("%s %d\n", s, 2); free(s); free(str); 

	s = ft_substr("42", 0, 0);
	/* 11  fcaquard */ printf("%d\n", !strcmp(s, ""));
	/* 12  fcaquard */ printf("%s %d\n", s, 1); free(s); 

	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	/* 13  dfarhi */ printf("%d\n", !strcmp(s, "LES HARICOTS !"));
	/* 14  dfarhi */ printf("%s %d\n", s, 15); free(s); 

	s = ft_substr("test", 1, 2);
	/* 15  dfarhi */ printf("%d\n", !strcmp(s, "es"));
	/* 16  dfarhi */ printf("%s %d\n", s, 3); free(s); 
}