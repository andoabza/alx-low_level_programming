#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that add a new  node at beginning
 * @head: dlistint_t double pointer
 * @n: value for the new node
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new->prev = NULL;
		new->next = *head;
		new->n = n;
		*head = new;
	}
	else
	{
		*head = new;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
	}
	return (*head);
}
