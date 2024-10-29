#include "../libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)) {
  t_list *return_head = NULL;
  t_list *mapped_curr = NULL;

  t_list *curr = lst;

  while(curr != NULL) {
    t_list *mapped = f(curr);

    if (return_head == NULL) {
      return_head = mapped;
      mapped_curr = mapped;
    } else {
      mapped_curr->next = mapped;
      mapped_curr = mapped;
    }

    curr = curr->next;
  }

  return return_head;
}
