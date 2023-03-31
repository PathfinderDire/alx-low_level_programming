#include "lists.h"

/**
 * print_list - Print all elements in a list
 * @h: Node pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h !=  NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL ? h->str : "(nil)"));
		h = h->next;
		count++;
	};
	return (count);
}
