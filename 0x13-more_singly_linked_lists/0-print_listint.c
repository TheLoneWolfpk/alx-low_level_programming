#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - print a singly linked ist
 * @h: list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *now;
	int count = 0;

	now = h;
	while (now)
	{
		printf("%d\n", now->n);
		count++;
		now = now->next;
	}

	return (count);
}
