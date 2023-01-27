#include "lists.h"
/**
 * print_list - print all the elements of list_t
 * @h: head of the list
 * Return: element of the list
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	for (size = 0; h != NULL; size++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
