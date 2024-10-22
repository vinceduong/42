#include "../libft.h"
#include <stdio.h>

void test_ft_atoi() {

  Assert(ft_atoi("123") == 123, "return value should be 123");
  Assert(ft_atoi("321") == 321, "return value should be 321");
  Assert(ft_atoi("321-+") == 321, "return value should be 321");
  Assert(ft_atoi(" -234 56891234569") == -234, "return value should be -234");
  Assert(ft_atoi("2147483647") == 2147483647, "return value should be 2147483647");
  Assert(ft_atoi("-2147483648") == -2147483648, "return value should be -2147483648");
  Assert(ft_atoi("-2147483649") == 2147483647, "return value should be 2147483647");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_atoi(); }
