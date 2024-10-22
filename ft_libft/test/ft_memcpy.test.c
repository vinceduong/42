
#include "../libft.h"
#include <stdio.h>

void test_ft_memmove_no_overlap() {
  char dest[10];
  char src[10] = "0123456789";


  ft_memcpy(dest,src, 10);

  int i = 0;

  while (i < 10) {
    Assert(dest[i] == src[i], "dest byte should be equal to src byte");
    i++;
  }

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_memmove_no_overlap(); }
 
