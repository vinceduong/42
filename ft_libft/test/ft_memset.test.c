#include "../libft.h"
#include <stdio.h>

void test_ft_memset() {
  char buffer[10];


  ft_memset(buffer, 2, 5);

  int i = 0;

  while (i < 5) {
    Assert(buffer[i] == 2, "buffer byte should be 2");
    i++;
  }

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memset(); }
