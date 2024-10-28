#include "../libft.h"
#include <stdio.h>

size_t string_length(int n) {
  size_t length = 1;

  if (n < 0) {
    length++;
    n = -n;
  }

  while (n >= 10) {
    n /= 10;
    length++;
  }

  return length;
}

char *ft_itoa(int n) {
  size_t length = string_length(n);

  size_t ri = length - 1;

  char *string = malloc(sizeof(char) * (string_length(n) + 1));

  if (string == NULL) {
    return string;
  }

  string[length] = '\0';

  if (n < 0) {
    n = -n;
    string[0] = '-';
  }

  while (n >= 10) {
    string[ri] = '0' + n % 10;
    ri--;
    n /= 10;
  }

  string[ri] = '0' + n % 10;

  return string;
}
