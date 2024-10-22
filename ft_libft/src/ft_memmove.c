#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
  size_t i = 0;

  if (len == 0) {
    return dst;
  }


  if (dst < src) {

    while (i < len) {
      *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
      i++;
    }

    return dst;
  }

  while (i < len) {
    *(unsigned char *)(dst + len - 1 - i) = *(unsigned char *)(src + len - i - 1);
    i++;
  }

  return dst;
}
