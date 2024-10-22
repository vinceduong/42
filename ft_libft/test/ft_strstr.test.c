#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strnstr() {
  char s1[7] = "mdrlol";

  char *return_ptr = ft_strstr(s1, "lol\0");
  Assert(return_ptr == (s1 + 3), "return ptr should be on l");

  return_ptr = ft_strstr(s1, "lolo\0");
  Assert(return_ptr == NULL, "return ptr should be NULL");

  return_ptr = ft_strstr(s1, "mdr\0");
  Assert(return_ptr == s1, "return ptr should be s1");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strnstr(); }

