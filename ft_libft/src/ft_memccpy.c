#include <stddef.h>

void *ft_memccpy(void *dst, const void *src, int c,  size_t n) {
  size_t i = 0;

  while (i < n) {
    *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
    if (*(unsigned char *)(dst + i) == c) {
      return dst + i + 1;
    }

    i++;
  }

  return NULL;
}
