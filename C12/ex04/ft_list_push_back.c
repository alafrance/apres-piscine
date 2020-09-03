#include "ft_list.h"
/*
#include <stdlib.h>
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
*/
t_list *ft_list_last(t_list *begin_list){
	t_list *actual;
	if(begin_list == NULL)
		return NULL;
	while(begin_list->next)
		begin_list = begin_list->next;
	return begin_list;
}
void ft_list_push_back(t_list **begin_list, void *data){
	t_list *new_elem;
	t_list *last;
	new_elem = ft_create_elem(data);
	last = ft_list_last(*begin_list);
	last->next = new_elem;
}
/*
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
	ft_list_push_back(&list, "coucou");
	printf("%s, %s, %s, %s\n", list->data, list->next->data, list->next->next->data, list->next->next->next->data );
}
*/
