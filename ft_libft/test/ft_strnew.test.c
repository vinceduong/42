#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strncat() {
  char *str = ft_strnew(5);

  Assert(str[0] == '\0', "char should be '\0'");
  Assert(str[1] == '\0', "char should be '\0'");
  Assert(str[2] == '\0', "char should be '\0'");
  Assert(str[3] == '\0', "char should be '\0'");
  Assert(str[4] == '\0', "char should be '\0'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncat(); }

