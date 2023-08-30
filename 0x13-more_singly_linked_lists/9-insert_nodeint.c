#include "lists.h"

/**
*insert_nodeint_at_index - insert node at a given position
*@head: pointer to the head of the list
*@idx: index at which to insert the new node
*@n: data for the new node
*Return: address of the new node, NULL if it failed
**/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	size_t i;

	temp = *head;
	i = 0;
	while (temp)
	{
		if (i == (idx - 1))
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
