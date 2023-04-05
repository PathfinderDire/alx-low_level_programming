#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of listint_t
 *
 * Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL;
	listint_t *prv = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	(*head)->next = prv;
	return (*head);
}
