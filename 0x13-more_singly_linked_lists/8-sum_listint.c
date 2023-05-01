#include "lists.h"

/**
 * sum_listint - A function that sums values from listint_t
 * @head: pointer of listint_t
 * Return: The sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
