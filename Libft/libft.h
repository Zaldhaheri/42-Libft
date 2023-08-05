#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(char c);
char ft_tolower(char c);
char ft_toupper(char c);
int ft_strlen(char *str);
char *ft_strchr(const char *str, char c);
int ft_strncmp(char *str1, char *str2, int n);
int ft_atoi(const char *str);

#endif