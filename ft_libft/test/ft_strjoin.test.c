#include "../libft.h"
#include <stdio.h>

void test_ft_strjoin() {
  Assert(ft_strequ(ft_strjoin("123","456"), "123456"), "string should be '123456'");
  Assert(ft_strequ(ft_strjoin("123","123"), "123123"), "string should be '123123'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strjoin(); }
      
