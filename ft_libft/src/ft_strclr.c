#include "../libft.h"

void ft_strclr(char *s) {
  while (*s != '\0')   {
    *s = '\0';
    s++;
  }
}
