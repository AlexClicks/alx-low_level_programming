#include "lists.h"
/**
 * list_len - Function that returns the number of argument in a linked list.
 * @h: singly linnked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t Count;

	Count = 0;

	while (h != NULL)

	{
		h = h->next;

		Count++;
	}

	return (Count);
}
