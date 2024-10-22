#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strncat() {
  char s1[11] = "0123456780";
  char s2[11] = "0123456789";

  Assert(ft_memcmp(s1, s2, 10) == -9, "Return value should be -9");
  Assert(ft_memcmp(s1, s2, 4) == 0, "Return value should be 0");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncat(); }
