#include "../libft.h"

char *ft_strrchr(const char *s, int c) {
  char *return_ptr = NULL;

  while (*s != '\0') {
    if (*s == c) {
      return_ptr = (char *)s;
    }

    s++;
  }

  return return_ptr;
}
