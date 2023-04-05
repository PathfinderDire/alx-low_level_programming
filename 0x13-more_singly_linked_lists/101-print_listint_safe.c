#include "lists.h"
/**
 * print_listint_safe - prints linked list listint_t, safe
 * @head: pointer to the head of list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *p = NULL;
	size_t count = 0;
	size_t new;

	tmp = head;
	while (tmp)
	{
		printf(" [%p] %d\n", (void *)tmp, tmp->n);
		new = (size_t)tmp;
		tmp = tmp->next;
		count++;
		if (new <= (size_t)tmp)
		{
			p = tmp;
			break;
		}
	}
	if (p)
	{
		printf("-> [%p] %d\n", (void *)p, p->n);
		count++;
	}
	return (count);
}
