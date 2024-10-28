#include "../libft.h"
#include <stdio.h>
#include <string.h>

void free_content(void *string, size_t size) {
  (void)(size);

  char *str = (char *)string;
  ft_strdel(&str);
}

void test_ft_lstnew() {
  char content[] = "content";

  t_list *lst_node = ft_lstnew(&content, sizeof(content));
  t_list **lst_node_ptr = &lst_node;

  ft_lstdelone(lst_node_ptr, &free_content);
  Assert(*lst_node_ptr == NULL, "*lst_node_ptr should be null");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_lstnew(); }
