#include "lists.h"
#include <string.h>
/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t
 * @str: string to add as node
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}
	return (new);
}
