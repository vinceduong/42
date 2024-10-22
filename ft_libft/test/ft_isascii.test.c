#include "../libft.h"
#include <stdio.h>

void test_ft_memset() {
  char c = 0;

  Assert(!ft_isascii(c - 1), "char is not ascii");

  while (c <= 127 && c >= 0) {
    Assert(ft_isascii(c), "char is ascii");
    c++;
  }
  Assert(!ft_isascii(c + 1), "char is not ascii");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memset(); }
