#include "../libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2) {
  size_t len_s1 = ft_strlen(s1);
  size_t len_s2 = ft_strlen(s2);
  char *str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

  char *str_after_s1 = ft_strncpy(str, s1, len_s1);
  ft_strncpy(str_after_s1 + 1, s2, len_s2);

  return str;
}
