#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_lstadd() {
  char content_a[] = "content";

  char content_b[] = "content";

  t_list *lst_node_a = ft_lstnew(&content_a, sizeof(content_a));
  t_list *lst_node_b = ft_lstnew(&content_b, sizeof(content_b));
  t_list *head = lst_node_a;

  ft_lstadd(&head, lst_node_b);
  
  Assert(head == lst_node_b, "head should be lst_node_b");
  Assert(head->next == lst_node_a, "head should be lst_node_a");

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_lstadd(); }
