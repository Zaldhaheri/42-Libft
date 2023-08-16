#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(char c);
int	ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *str1, const void *str2, size_t n);
void *ft_memset(void *str, int x, size_t n);
char *ft_strchr(const char *str, char c);
char *ft_strdup(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t n);
int ft_strlen(const char *str);
int ft_strncmp(const char *str1, const char *str2, int n);
char *ft_strnstr(char *str, const char *find, size_t n);
char *ft_strrchr(const char *str, int c);
char ft_tolower(char c);
char ft_toupper(char c);

#endif