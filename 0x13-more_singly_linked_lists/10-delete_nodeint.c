#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index in a list_t list
 * @head: pointet to pointer of head of linked list
 * @index: the index of node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curnt = *head;
	listint_t *pre = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curnt);
		return (1);
	}
	while (curnt != NULL && i < index)
	{
		pre = curnt;
		curnt = curnt->next;
		i++;
	}
	if (curnt == NULL)
		return (-1);
	pre->next = curnt->next;
	free(curnt);
	return (1);
}
