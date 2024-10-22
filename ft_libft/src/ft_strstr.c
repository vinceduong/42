#include "../libft.h"

char *ft_strstr(const char *haystack, const char *needle){
  size_t i = 0; 
  int j = 0;
  int needle_index = 0;
  int needle_index_is_set = 0;

  if (haystack == NULL || needle == NULL) {
    return NULL;
  }

  while (haystack[i] != '\0') {
    if (haystack[i] == needle[j]) {
      if (needle_index_is_set == 0) {
        needle_index = i;
        needle_index_is_set = 1;
      }
      j++;
    } else {
      j = 0;
      needle_index_is_set = 0;
    }
    if (needle[j] == '\0') {
      return (char *)haystack + needle_index;
    }
    i++;
  }

  return NULL;
}
