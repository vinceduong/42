#include "../libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
  size_t i = 0;
  size_t j = 0;

  if (dstsize == 0 || dst == NULL || src == NULL) {
    return 0;
  }

  while (i < dstsize && dst[i] != '\0') {
    i++;
  }

  if (i == dstsize) {
    return i;
  }

  while (i + j < dstsize - 1 && src[j] != '\0') {
    dst[i + j] = src[j];
    j++;
  }

  dst[i + j] = '\0';

  return i + ft_strlen(src);
}
