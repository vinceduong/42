#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strrchr() {
  char s1[7] = "mdrlol";

  char *return_ptr = ft_strrchr(s1, 'r');
  Assert(return_ptr == (s1 + 2), "return ptr should be on r");

  return_ptr = ft_strrchr(s1, 'l');
  Assert(return_ptr == s1 + 5, "return ptr should be second l");

  return_ptr = ft_strrchr(s1, 'z');
  Assert(return_ptr == NULL, "return ptr should be NULL");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strrchr(); }
