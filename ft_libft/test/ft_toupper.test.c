#include "../libft.h"
#include <stdio.h>

void test_ft_to_upper() {

  Assert(ft_toupper('A') == 'A', "return value should be 'A'");
  Assert(ft_toupper('Z') == 'Z', "return value should be 'Z'");
  Assert(ft_toupper('a') == 'A', "return value should be 'A'");
  Assert(ft_toupper('z') == 'Z', "return value should be 'Z'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_to_upper(); }
