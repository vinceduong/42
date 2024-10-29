#include "../libft.h"
#include <stdio.h>
#include <string.h>

int j = 0;

void check_elem(t_list *elem) {
    Assert(*(int *)(elem->content) == (4 - j) * 2, "content should be equal to 4 - j");
    j++;
}

t_list *map(t_list *elem) {
  int mapped =  *(int*)(elem -> content) * 2;
  return ft_lstnew(&mapped, sizeof(int));
}

void test_ft_lstmap() {
  int contents[] = {1,2,3,4};

  int i = 0;

  t_list *head = ft_lstnew(&contents[0], sizeof(contents[0]));

  while (i < 3) {
     ft_lstadd(&head, ft_lstnew(&contents[i + 1], sizeof(contents[0])));
     i++;
  }

  t_list *mapped = ft_lstmap(head, &map);
  ft_lstiter(mapped, &check_elem);

  printf("\033[0;32m");
  printf("✅ %s - %s test passed\n", __FILE__, __FUNCTION__);
  printf("\033[0m");
}

int main() { test_ft_lstmap(); }

