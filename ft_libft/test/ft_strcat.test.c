#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strncat() {
  char s1[7] = "mdr";

  char *return_ptr = ft_strcat(s1, "lol");

  Assert(s1[0] == 'm', "char should be 'm'");
  Assert(s1[1] == 'd', "char should be 'd'");
  Assert(s1[2] == 'r', "char should be 'r'");
  Assert(s1[3] == 'l', "char should be 'l'");
  Assert(s1[4] == 'o', "char should be 'o'");
  Assert(s1[5] == 'l', "char should be 'l'");
  Assert(s1[6] == '\0', "char 3 should be '\0'");

  Assert(return_ptr == s1, "ptr should be 1");
  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncat(); }
