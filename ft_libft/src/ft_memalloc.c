#include "../libft.h"

void *ft_memalloc(size_t size) {
  void *ptr = malloc(size);

  if (ptr == NULL) {
    return NULL;
  }

  ft_bzero(ptr, size);

  return ptr;
}
