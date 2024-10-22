#include "../libft.h"
#include <stdio.h>

void test_ft_isdigit() {
  char c = '0';

  Assert(!ft_isdigit(c - 1), "char is not digit");

  while (c <= '9') {
    Assert(ft_isdigit(c), "char is digit");
    c++;
  }
  Assert(!ft_isdigit(c + 1), "char is not digit");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_isdigit(); }
            
