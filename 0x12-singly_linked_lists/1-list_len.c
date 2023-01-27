#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: numberof elements
 */
size_t list_len(const list_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		h = h->next;
	}
	return (size);
}
