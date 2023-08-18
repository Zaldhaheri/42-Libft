#include "libft.h"

int main ()
{
    char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	/* 1 */ printf("%d\n", ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B")); 
	dest[0] = 'B';
	/* 2 */ printf("%d\n", ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B")); 
	memset(dest, 'B', 4);
	/* 3 */ printf("%d\n", ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB")); 
	/* 4 */ printf("%d\n", ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA")); 
	memset(dest, 'C', 5);
	/* 5 */ printf("%d\n", ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA")); 
	memset(dest, 'C', 15);
	/* 6 */ printf("%d\n", ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA")); 
	memset(dest, 0, 30);
	/* 7 */ printf("%d\n", ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, "")); 
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 8 */ printf("%d\n", ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); 
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 9 */ printf("%d\n", ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111")); 
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 10 */ printf("%d\n", ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111")); 
	memset(dest, 0, 30);
	/* 11 */ printf("%d\n", ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, "")); 
	memset(dest, 0, 30);
	/* 12 */ printf("%d\n", ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, "")); 
	memset(dest, 0, 30);
	/* 13 */ printf("%d\n", ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, "")); 
	memset(dest, 0, 30);
	/* 14 */ printf("%d\n", ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1")); 
	memset(dest, 0, 30);
	/* 15 */ printf("%d\n", ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12")); 
	memset(dest, 0, 30);
	/* 16 */ printf("%d\n", ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123")); 
	memset(dest, 0, 30);
	/* 17 */ printf("%d\n", ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, "")); 
	write(1, "\n", 1);
}
