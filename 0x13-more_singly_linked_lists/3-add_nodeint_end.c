#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of list
 * @head: A pointer to list structure
 * @n: An integer data to put into the new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
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
