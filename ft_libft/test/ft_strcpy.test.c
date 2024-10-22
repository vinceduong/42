#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strcpy() {
  char chararray[6];

  char *return_ptr = ft_strcpy(chararray, "abc");

  Assert(chararray[0] == 'a', "char should be 'a'");
  Assert(chararray[1] == 'b', "char should be 'b'");
  Assert(chararray[2] == 'c', "char should be 'c'");
  Assert(chararray[3] == '\0', "char 3 should be '\0'");

  Assert(return_ptr == chararray + 3, "ptr should be chararray + 3");
  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strcpy(); }
