#include "../libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n) {
  size_t i = 0;
  size_t j = 0;

  if (s1 == NULL || s2 == NULL) {
    return s1;
  }

  while (s1[i] != '\0') {
    i++;
  }

  while (j < n) {
    s1[i + j] = s2[j];
    j++;
  }

  s1[i + j] = '\0';

  return s1;
}
