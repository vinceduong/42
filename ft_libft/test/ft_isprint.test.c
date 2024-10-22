#include "../libft.h"
#include <stdio.h>

void test_ft_memset() {
  char c = 32;

  Assert(!ft_isprint(c - 1), "char is not print");

  while (c < 127) {
    Assert(ft_isprint(c), "char is print");
    c++;
  }
  Assert(!ft_isprint(c + 1), "char is not print");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memset(); }
