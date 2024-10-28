#include "../libft.h"
#include <stdio.h>

void test_ft_itoa() {

  Assert(ft_strequ(ft_itoa(123), "123"), "return value should be '123'");
  Assert(ft_strequ(ft_itoa(-123), "-123"), "return value should be '-123'");
  Assert(ft_strequ(ft_itoa(23432432), "23432432"), "return value should be '23432432'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_itoa(); }

