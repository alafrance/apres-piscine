#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data){
	t_list *elem;
	elem = NULL;
	elem = malloc(sizeof(*elem));
	if(elem){
		elem->data = data;
		elem->next = NULL;
	}
	return elem;
}
void ft_list_push_front(t_list **begin_list, void *data){
	t_list *new_elem;
	if(*begin_list){
		new_elem = ft_create_elem(data);
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}else
		*begin_list = ft_create_elem(data);
}
#include <stdio.h>
int main(int ac, char **av){
	t_list *list;
	ft_list_push_front(&list, "hola");
	ft_list_push_front(&list, "hole");
	ft_list_push_front(&list, "oli");
	printf("%s, %s, %s\n", list->data, list->next->data, list->next->next->data);
}
