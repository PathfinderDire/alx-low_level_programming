#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node in a listint_t
 * @head: pointer to head of linked list
 * @index: index of node, starting from 0
 *
 * Return: pointer to the nth node , or NULL of it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
