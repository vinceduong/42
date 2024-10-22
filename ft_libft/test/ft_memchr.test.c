#include "../libft.h"
#include <stdio.h>

void test_ft_strncat() {
  char src[11] = "0123456789";

  void *ptr1 = ft_memchr(src, '5', 10);

  Assert(ptr1 == src + 5, "return ptr1 should be equal to src + 5");

  void *ptr2= ft_memchr(src, 'a', 10);
  Assert(ptr2 == NULL, "return ptr2 should be NULL")

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_strncat(); }
