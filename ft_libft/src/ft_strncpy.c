#include "../libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)  {
  if (len == 0 || src == NULL || dst == NULL) {
    return dst;
  }

  size_t i = 0;
  int end_of_src_reached = 0;


  while (i < len) {
    if (end_of_src_reached) {
      dst[i] = '\0';
    } else if (src[i] == '\0' && !end_of_src_reached) {
      end_of_src_reached = 1;
      dst[i] = '\0';
    } else {
      dst[i] = src[i];
    }

    i++;
  }

  return dst + i - 1;
}

