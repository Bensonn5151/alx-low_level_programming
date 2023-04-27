#include "lists.h"
#include <string.h>
/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t
 * @str: pointer to string
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int length = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);

	while (str[length])
		length++;

	t->len = length;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}
