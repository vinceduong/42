#include "../libft.h"

int ft_atoi(const char *str) {
  int i = 0;
  int parsedValue = 0;
  int sign = 1;

  while (ft_isspace(str[i])) {
    i++;    
  }

  if (str[i] == '+' || str[i] == '-') {
    if (str[i] == '-') {
      sign = -1;
    }
    i++;
  }

  while (ft_isdigit(str[i])){
    parsedValue = parsedValue * 10 + str[i] - '0';
    i++;
  }

  return parsedValue * sign;
}
