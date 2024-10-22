#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
  size_t i = 0;    

  while (i < n) {
    if (*(unsigned char *)(s + i) == c) {
      return (void *)s + i;
    }
    i++;
  }

  return NULL;
}
