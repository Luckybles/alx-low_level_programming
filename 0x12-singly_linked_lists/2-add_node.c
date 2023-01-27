#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new1;
	size_t length;

	new1 = malloc(sizeof(list_t));
	if (new1 == NULL)
	{
		return (NULL);
	}
	new1->str = strdup(str);

	for (length = 0; str[len]; length++)
	{
		new1->length = length;
		new1->next = *head;
		*head = new1;
	}
	return (*head);
}
