#include "lists.h"

/**
 * free_listint - a function that frees listint-t list
 * @head:pointer to head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
