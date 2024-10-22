#include "../libft.h"
#include <stdio.h>

void test_ft_memset() {
  char c = '0';

  Assert(!ft_isalnum(c - 1), "char is not alnum");

  while (c <= '9') {
    Assert(ft_isalnum(c), "char is alnum");
    c++;
  }
  Assert(!ft_isalnum(c + 1), "char is not alnum");

  c = 'a';

  Assert(!ft_isalnum(c - 1), "char is not alnum");

  while (c <= 'z') {
    Assert(ft_isalnum(c), "char is alnum");
    c++;
  }
  Assert(!ft_isalnum(c + 1), "char is not alnum");

  c = 'A';

  Assert(!ft_isalnum(c - 1), "char is not alnum");

  while (c <= 'Z') {
    Assert(ft_isalnum(c), "char is alnum");
    c++;
  }
  Assert(!ft_isalnum(c + 1), "char is not alnum");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memset(); }
