#include "lists.h"
/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer 
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *t;

	t = head;
	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
	free(head);
}
