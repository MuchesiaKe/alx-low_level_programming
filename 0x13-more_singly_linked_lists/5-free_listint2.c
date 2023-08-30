#include "lists.h"

/**
*free_listint2 - frees a list
*@head: pointer to head of the list
**/

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
