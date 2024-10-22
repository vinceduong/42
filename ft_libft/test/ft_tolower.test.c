#include "../libft.h"
#include <stdio.h>

void test_ft_to_lower() {

  Assert(ft_tolower('A') == 'a', "return value should be 'a'");
  Assert(ft_tolower('Z') == 'z', "return value should be 'Z'");
  Assert(ft_tolower('a') == 'a', "return value should be 'a'");
  Assert(ft_tolower('z') == 'z', "return value should be 'z'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_to_lower(); }
