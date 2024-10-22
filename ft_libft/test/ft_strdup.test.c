#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strndup() {
  char str[] = "012345";

  char *dup = ft_strdup(str);

  Assert(dup[0] == '0', "char should be '0'");
  Assert(dup[1] == '1', "char should be '1'");
  Assert(dup[2] == '2', "char should be '2'");
  Assert(dup[3] == '3', "char should be '3'");
  Assert(dup[4] == '4', "char should be '4'");
  Assert(dup[5] == '5', "char should be '5'");
  Assert(dup[6] == '\0', "char should be '\0'");

  char *str_null = NULL;

  char *dup_null = ft_strdup(str_null);

  Assert(dup_null == NULL, "ptr should be NULL");
  
  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strndup(); }

