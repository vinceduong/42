#include "../libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len) {
  char *str = malloc(sizeof(char) * (len + 1));

  if (str == NULL) {
    return str;
  }

  ft_strncpy(str, s + start, len);

  str[len] = '\0';

  return str;
}
