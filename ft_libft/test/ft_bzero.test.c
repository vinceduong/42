#include "../libft.h"
#include <stdio.h>

void test_ft_memmove_no_overlap() {
  char buffer[10];


  ft_bzero(buffer, 10);

  int i = 0;

  while (i < 10) {
    Assert(buffer[i] == 0, "buffer byte should be 0");
    i++;
  }

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memmove_no_overlap(); }
 
