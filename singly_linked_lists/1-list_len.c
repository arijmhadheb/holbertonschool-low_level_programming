#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
size_t list_len(const list_t *h)
{
	size_t count;
	
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
