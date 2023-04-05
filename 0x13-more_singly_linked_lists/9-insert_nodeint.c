#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node at index idx
 * @head: pointer to head of node
 * @idx: the index to put the node
 * @n: new data of new node
 *
 * Return: adress of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = NULL;
	listint_t *temp = NULL;
	unsigned int p = 0;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp != NULL && p < idx - 1)
	{
		temp = temp->next;
		p++;
	}
	if (temp == NULL)
		return (NULL);
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
