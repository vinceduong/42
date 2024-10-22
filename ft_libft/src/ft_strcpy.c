#include "../libft.h"

char *ft_strcpy(char *dst, const char *src) {
  size_t i = 0;

  if (src == NULL || dst == NULL) {
    return dst;
  }

  while (src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }

  dst[i] = '\0';

  return dst + i;
}
