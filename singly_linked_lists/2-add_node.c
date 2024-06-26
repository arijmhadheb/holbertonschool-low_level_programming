#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	size_t k;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);

	for (k = 0; str[k]; k++)
		;

	p->len = k;
	p->next = *head;
	*head = p;

	return (*head);
}
