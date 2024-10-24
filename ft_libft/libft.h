// #ifndef LIBFT_H
// # define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define Assert(bool, err)                                                      \
  assert(bool, err, (char *)__func__, __LINE__, __FILE__);

void assert(int flag, char *err, char *test_name, int line, char *file);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isspace(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
char *ft_strnew(size_t size);
char *ft_strdup(char *s1);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strcpy(char *dst, const char *src);
char *ft_strcat(char *s1, const char *s2);
char *ft_strncat(char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystaack, const char *needle);
char *ft_strnstr(const char *haystaack, const char *needle, size_t len);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
void * ft_memalloc(size_t size);
void ft_memdel(void **ap);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char(*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
