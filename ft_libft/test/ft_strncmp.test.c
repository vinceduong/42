#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strncmp() {
  Assert(ft_strncmp("abcd", "abce", 4) == -1, "return value should be -1");
  Assert(ft_strncmp("abcd", "abc", 5) == 'd', "return value should be d");
  Assert(ft_strncmp("abcd", "abcd", 10) == 0, "return value should be 0");
  Assert(ft_strncmp("abcdde", "abcdab", 3) == 0, "return value should be 0");
 
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncmp(); }
