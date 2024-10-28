#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_lstnew() {
  char content[] = "content";

  t_list *lst_node = ft_lstnew(&content, sizeof(content));

  Assert(lst_node->content_size == sizeof(content), "content_size should be 7");
  Assert(memcmp(lst_node->content, content, sizeof(content)) == 0,
         "content should be equal");
  Assert(lst_node->next == NULL, "next should be NULL");

  t_list *lst_node_null = ft_lstnew(NULL, 2342);

  Assert(lst_node_null->content_size == 0, "content_size should be 0");
  Assert(lst_node_null->content == NULL,"content should be null");
  Assert(lst_node_null->next == NULL, "next should be equal");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_lstnew(); }
