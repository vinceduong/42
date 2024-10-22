#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strlcpy() {
  char s1[10];

  size_t n = ft_strlcpy(s1, "lol", 5);

  Assert(n = 4, "n should be 4");
  Assert(s1[0] == 'l', "char should be 'l'");
  Assert(s1[1] == 'o', "char should be 'o'");
  Assert(s1[2] == 'l', "char should be 'l'");
  Assert(s1[3] == '\0', "char should be '\0'");

  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strlcpy(); }
 
