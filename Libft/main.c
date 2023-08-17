#include "libft.h"

int main ()
{
    /* 1 */ printf("%d\n", ft_strncmp("t", "", 0) == 0); 
	/* 2 */ printf("%d\n", ft_strncmp("1234", "1235", 3) == 0); 
	/* 3 */ printf("%d\n", ft_strncmp("1234", "1235", 4) < 0); 
	/* 4 */ printf("%d\n", ft_strncmp("1234", "1235", -1) < 0); 
	/* 5 */ printf("%d\n", ft_strncmp("", "", 42) == 0); 
	/* 6 */ printf("%d\n", ft_strncmp("Tripouille", "Tripouille", 42) == 0); 
	/* 7 */ printf("%d\n", ft_strncmp("Tripouille", "tripouille", 42) < 0); 
	/* 8 */ printf("%d\n", ft_strncmp("Tripouille", "TriPouille", 42) > 0); 
	/* 9 */ printf("%d\n", ft_strncmp("Tripouille", "TripouillE", 42) > 0); 
	/* 10 */ printf("%d\n", ft_strncmp("Tripouille", "TripouilleX", 42) < 0); 
	/* 11 */ printf("%d\n", ft_strncmp("Tripouille", "Tripouill", 42) > 0); 
	/* 12 */ printf("%d\n", ft_strncmp("", "1", 0) == 0); 
	/* 13 */ printf("%d\n", ft_strncmp("1", "", 0) == 0); 
	/* 14 */ printf("%d\n", ft_strncmp("", "1", 1) < 0); 
	/* 15 */ printf("%d\n", ft_strncmp("1", "", 1) > 0); 
	/* 16 */ printf("%d\n", ft_strncmp("", "", 1) == 0); 
	write(1, "\n", 1);
	return (0);
}
