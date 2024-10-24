#include "../libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char)) {
  char *map = malloc(sizeof(char) * ft_strlen(s) + 1);

  if (map == NULL) {
    return NULL;
  }

  size_t i = 0;

  while (s[i] != '\0') {
    map[i] = f(i , s[i]);
  }

  map[i] = '\0';

  return map;
}
