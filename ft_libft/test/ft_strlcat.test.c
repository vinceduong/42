#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strchr() {
  char s1[7] = "mdr";

  size_t total_length = ft_strlcat(s1, "lol0fdsafdsafds\0", 5);

  Assert(total_length == 18, "total_length should be 5");

  Assert(s1[0] == 'm', "char should be 'm'");
  Assert(s1[1] == 'd', "char should be 'd'");
  Assert(s1[2] == 'r', "char should be 'r'");
  Assert(s1[3] == 'l', "char should be 'l'");
  Assert(s1[4] == '\0', "char 3 should be '\0'");
  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strchr(); }
 

