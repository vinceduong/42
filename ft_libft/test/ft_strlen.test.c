#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strlen() {
  char s1[11] = "0123456780";

  Assert(ft_strlen(s1) == 10, "Return value should be 10");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strlen(); }
