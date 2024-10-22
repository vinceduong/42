#include <stddef.h>
#include <stdlib.h>
#include "../libft.h"

char *ft_strdup(char *s1) {
  if (!s1) {
    return NULL;
  }
  
  char *dup;
  size_t len = ft_strlen(s1);

  dup = malloc((len + 1) * sizeof(*dup));

  if (!dup) {
    return NULL;
  }

  size_t i = 0;

  while (i < len) {
    *(dup + i) = *(s1 + i);
    i++;
  }

  *(dup + i) = '\0';
  

  return dup;
}
