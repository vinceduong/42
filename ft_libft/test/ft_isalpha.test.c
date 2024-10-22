#include "../libft.h"
#include <stdio.h>

void test_ft_isalpha() {
  char c = 'a';

  Assert(!ft_isalpha(c - 1), "char is not alpha");

  while (c <= 'z') {
    Assert(ft_isalpha(c), "char is alpha");
    c++;
  }
  Assert(!ft_isalpha(c + 1), "char is not alpha");
  c = 'A';

  Assert(!ft_isalpha(c - 1), "char is not alpha");

  while (c <= 'Z') {
    Assert(ft_isalpha(c), "char is alpha");
    c++;
  }
  Assert(!ft_isalpha(c + 1), "char is not alpha");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_isalpha(); }
