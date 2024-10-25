#include "../libft.h"
#include <stdio.h>

unsigned int word_count(char const *s, char c) {
  unsigned int count = 0;

  short last_char_was_c = 1;

  while (*s != '\0') {
    if (*s == c) {
      last_char_was_c = 1;
    }

    if (*s != c && last_char_was_c == 1) {
      count++;
      last_char_was_c = 0;
    }

    s++;
  }

  return count;
}

char **ft_strsplit(char const *s, char c) {
  unsigned int wcount = word_count(s, c);
  char **split = malloc(sizeof(char *) * (wcount + 1));

  if (split == NULL) {
    return NULL;
  }

  short parsing_finished = 0;
  size_t word_index = 0;

  while (*s != '\0' && !parsing_finished) {
    if (*s == c) {
      s++;
    }

    if (*s != c) {

      char *next_delimiter_ptr = ft_strchr(s, (int)c);

      if (next_delimiter_ptr == NULL) {
        split[word_index] = ft_strsub(s, 0, ft_strlen(s));
        if (split[word_index] == NULL) {
          return NULL;
        }
        parsing_finished = 1;
      } else {
        split[word_index] = ft_strsub(s, 0, next_delimiter_ptr - s);

        if (split[word_index] == NULL) {
          return NULL;
        }
        word_index++;

        s = next_delimiter_ptr;
      }
    }
  }

  split[wcount] = NULL;

  return split;
}
