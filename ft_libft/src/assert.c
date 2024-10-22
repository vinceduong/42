#include "../libft.h"
#include <stdio.h>

void assert(int bool, char *err, char* test, int line, char *file) {
  if (!bool) {
    printf("\033[1;31m");
    printf("❌ %s:%d - %s Assertion failed: %s\n", file, line, test, err);
    printf("\033[0m");
    exit(EXIT_FAILURE);
  }
}
