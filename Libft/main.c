#include "libft.h"

int main ()
{
	char * s = ft_strjoin("tripouille", "42");
	/* 1 */ printf("%d\n", !strcmp(s, "tripouille42"));
	/* 2 */ printf("%s %d\n", s, strlen("tripouille") + strlen("42") + 1); free(s); 

	s = ft_strjoin("", "42");
	/* 3 */ printf("%d\n", !strcmp(s, "42"));
	/* 4 */ printf("%s %d\n", s, strlen("") + strlen("42") + 1); free(s); 

	s = ft_strjoin("42", "");
	/* 5 */ printf("%d\n", !strcmp(s, "42"));
	/* 6 */ printf("%s %d\n", s, strlen("42") + strlen("") + 1); free(s); 

	s = ft_strjoin("", "");
	/* 7 */ printf("%d\n", !strcmp(s, ""));
	/* 8 */ printf("%s %d\n", s, strlen("") + strlen("") + 1); free(s); 
	write(1, "\n", 1);
    return (0);
}
