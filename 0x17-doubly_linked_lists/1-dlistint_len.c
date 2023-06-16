#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: dlistint_t pointer
 * Return: length of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
