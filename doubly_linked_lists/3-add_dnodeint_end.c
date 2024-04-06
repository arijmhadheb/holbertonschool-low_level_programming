#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *temp;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		p->prev = NULL;
		*head = p;
		return (p);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = p;
	p->prev = temp;

	return (p);
}
