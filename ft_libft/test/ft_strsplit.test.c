#include "../libft.h"
#include <stdio.h>

void test_ft_strsplit() {
  char **split = ft_strsplit("---abc----2---34-43-5***", '-');

  Assert(ft_strequ(split[0], "abc") == 1, "split 0 should be 'abc'");
  Assert(ft_strequ(split[1], "2") == 1, "split 1 should be '2'");
  Assert(ft_strequ(split[2], "34") == 1, "split 2 should be '34'");
  Assert(ft_strequ(split[3], "43") == 1, "split 3 should be '43'");
  Assert(ft_strequ(split[4], "5***") == 1, "split 4 should be '5***'");
  Assert(split[5] == NULL, "split 5 should be NULL");

  split = ft_strsplit("------------", '-');
  Assert(split[0] == NULL, "split 0 should be NULL");

  split = ft_strsplit("", '-');
  Assert(split[0] == NULL, "split 0 should be NULL");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strsplit(); }
