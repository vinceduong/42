#include "../libft.h"

char *ft_strcat(char *s1, const char *s2) {
  int i = 0;
  int j = 0;

  if (s1 == NULL || s2 == NULL) {
    return s1;
  }

  while (s1[i] != '\0') {
    i++;
  }

  while (s2[j] != '\0') {
    s1[i + j] = s2[j];
    j++;
  }

  s1[i + j] = '\0';
  return s1;
}
