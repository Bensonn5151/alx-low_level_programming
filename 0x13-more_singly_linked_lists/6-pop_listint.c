#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * @head: A pointer to listint_t
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int a;

	if (*head == NULL)
		return (0);

	a = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (a);
}
