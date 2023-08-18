#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tnp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tnp = head;
	while (tnp)
	{
	if (index == size)
	return (tnp);
	size++;
	tnp = tnp->next;
	}
	return (NULL);
}
