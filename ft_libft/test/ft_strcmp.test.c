#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strcmp() {
  Assert(ft_strcmp("abcd", "abce") == -1, "return value should be -1");
  Assert(ft_strcmp("abcd", "abc") == 'd', "return value should be d");
  Assert(ft_strcmp("abcd", "abcd") == 0, "return value should be 0");
 
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strcmp(); }
