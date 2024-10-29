#include "../libft.h"

void ft_lstadd(t_list **alst, t_list *new_node) {
  t_list *old_head = *alst;
  *alst = new_node;
  (*alst)->next = old_head;
}
