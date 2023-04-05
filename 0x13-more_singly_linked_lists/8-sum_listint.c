#include "lists.h"
/**
 * sum_listint - Function to sum up all data (n) in listint_t
 * @head: pointer to the head node of function
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *count = head;

	while (count != NULL)
	{
		sum += count->n;
		count = count->next;
	}
	return (sum);
}
