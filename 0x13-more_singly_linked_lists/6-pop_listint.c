#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: pointer to the 1st element on the linked list
 * Return: the data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)

		return (0);

	number = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;
	return (number);
}
