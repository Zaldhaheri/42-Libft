#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nitems, size_t size);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *str1, const void *str2, size_t n);
void *ft_memset(void *str, int x, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *str);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t n);
int ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr(char *str, const char *find, size_t n);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
char ft_tolower(int c);
char ft_toupper(int c);

#endif