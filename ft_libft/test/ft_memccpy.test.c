#include "../libft.h"
#include <stdio.h>

void test_ft_strncat() {
  char dest[10];
  char src[10] = "0123456789";

  void *ptr = ft_memccpy(dest, src, '5', 10);

  Assert(ptr == dest + 6, "return ptr should be equal to dst + 6 ")

  Assert(dest[0] == '0', "dest byte should be equal to '0'");
  Assert(dest[1] == '1', "dest byte should be equal to '1'");
  Assert(dest[2] == '2', "dest byte should be equal to '2'");
  Assert(dest[3] == '3', "dest byte should be equal to '3'");
  Assert(dest[4] == '4', "dest byte should be equal to '4'");
  Assert(dest[5] == '5', "dest byte should be equal to '5'");

  char dest2[10];
  char src2[10] = "0123456789";

  ptr = ft_memccpy(dest2, src2, 'b', 10);
  Assert(ptr == NULL, "return ptr should be NULL")

  int i = 0;

  while (i < 10) {
    Assert(dest2[i] == src2[i], "dest byte should be equal to src byte");
    i++;
  }

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncat(); }
