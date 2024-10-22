#include "../libft.h"

int ft_isspace(int c) {
  return c == ' ' || c == '\n' || c == '\v' || c == '\f' || c == '\r' ||
         c == '\t';
}
