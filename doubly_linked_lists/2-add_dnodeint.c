#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer of the head of the list.
 * @n: value of the element of the node.
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	p->next = *head;
	if (*head != NULL)
		(*head)->prev = p;
	*head = p;
	return (p);
}
