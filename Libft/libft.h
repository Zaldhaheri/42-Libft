#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(char c);
int ft_isprint(char c);
char ft_tolower(char c);
char ft_toupper(char c);
int ft_strlen(char *str);
char *ft_strchr(const char *str, char c);

#endif