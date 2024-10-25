#include "../libft.h"
#include <stdio.h>

void test_ft_strsub() {
  Assert(ft_strequ(ft_strsub("1234567", 0, 3), "123"), "string should be '123'");
  Assert(ft_strequ(ft_strsub("1234567", 3, 3), "456"), "string should be '567'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strsub(); }
      
