#include "lists.h"

/**
*delete_nodeint_at_index - deletes node at an index
*@head: reference to the start of the list
*@index: index to delete at
*Return: 1 for success, -1 for failure
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current, *free_node;
	size_t i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
		return (1);
	}
	current = prev = *head;
	i = 0;
	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free_node = current;
			free(free_node);
			return (1);
		}
		i++;
		prev = current;
		current = current->next;
	}
	return (-1);
}
