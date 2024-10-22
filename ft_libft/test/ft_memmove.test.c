#include "../libft.h"
#include <stdio.h>

void test_ft_memmove_no_overlap() {
  char dest[10];
  char src[10] = "012345678";

  char *ptr = ft_memmove(dest, src, 5);

  Assert(ptr == dest, "return ptr should be equal to dst + 6 ")

  Assert(ptr[0] == '0', "dest byte should be equal to '0'");
  Assert(ptr[1] == '1', "dest byte should be equal to '1'");
  Assert(ptr[2] == '2', "dest byte should be equal to '2'");
  Assert(ptr[3] == '3', "dest byte should be equal to '3'");
  Assert(ptr[4] == '4', "dest byte should be equal to '4'");


  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

void test_ft_memmove_overlap_dest_before_src() {
  char src[10] = "012345678";

  char *ptr= ft_memmove(src, src + 3, 4);

  Assert(ptr == src, "return ptr src")

  Assert(ptr[0] == '3', "dest byte should be equal to '3'");
  Assert(ptr[1] == '4', "dest byte should be equal to '4'");
  Assert(ptr[2] == '5', "dest byte should be equal to '5'");
  Assert(ptr[3] == '6', "dest byte should be equal to '6'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

void test_ft_memmove_overlap_src_before_dst() {
  char src[10] = "012345678";

  char *ptr = ft_memmove(src + 3, src, 4);

  Assert(ptr == src + 3, "return ptr src + 3");

  Assert(ptr[0] == '0', "dest byte should be equal to '3'");
  Assert(ptr[1] == '1', "dest byte should be equal to '4'");
  Assert(ptr[2] == '2', "dest byte should be equal to '5'");
  Assert(ptr[3] == '3', "dest byte should be equal to '6'");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { 
  test_ft_memmove_no_overlap();
  test_ft_memmove_overlap_dest_before_src();
  test_ft_memmove_overlap_src_before_dst();
}
