#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 *
 * Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			ree(temp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
