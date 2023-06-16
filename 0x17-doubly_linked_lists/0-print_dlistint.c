#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that print a double linked list
 * @h: dlistint_t pointer
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (!h)
	{
		return (0);
	}
	while (h)
	{

		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
