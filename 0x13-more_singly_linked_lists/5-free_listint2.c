#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	t = *head;
	while (*head)
	{
		t = *head;
		(*head) = (*head)->next;
		free(t);
	}
	*head = NULL;
}
