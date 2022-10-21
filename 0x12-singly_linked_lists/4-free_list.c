#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: head of the list.
 * Return: no return.
 */

void free_list(list_t *head)
{

	list_t *List;

	while ((List = head) != NULL)
	{
		head = head->next;
		free(List->str);
		free(List);
	}
}
