#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strlcat() {
  char s1[7] = "mdr";

  char *return_ptr = ft_strncat(s1, "lol", 1);

  Assert(s1[0] == 'm', "char should be 'm'");
  Assert(s1[1] == 'd', "char should be 'd'");
  Assert(s1[2] == 'r', "char should be 'r'");
  Assert(s1[3] == 'l', "char should be 'l'");
  Assert(s1[4] == '\0', "char 3 should be '\0'");

  Assert(return_ptr == s1, "ptr should be s1");
  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strlcat(); }
 
