#include <stddef.h>

void *ft_memset(void *b, int c, size_t len) {
  size_t i = 0;

  while (i < len) {
    *(unsigned char *)(b + i) = c;
    i++;
  }

  return b;
}
