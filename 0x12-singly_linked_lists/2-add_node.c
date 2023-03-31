#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node in a linked list
 * @str: a string to be added to the list
 * @head: a pointer to a pointer to the head of the list
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = (list_t *) malloc( sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
