#include "../libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  if (dstsize == 0 || src == NULL || dst == NULL) {
    return 0;
  }

  size_t i = 0;

  while (i < dstsize - 1 && src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }

  dst[i] = '\0';

  return i + 1;
}
