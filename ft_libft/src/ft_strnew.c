#include <stddef.h>
#include "../libft.h"
#include <stdlib.h>

char *ft_strnew(size_t size) {
  char *str;

  str = malloc(size * sizeof(*str));

  if (!str) {
    return str;
  }

  return ft_memset(str, '\0', size);
}
