#include "lists.h"

/**
 * list_len - returns the number of a elements in a list
 * @h: singly linked list
 * Return: number of elements in question
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
