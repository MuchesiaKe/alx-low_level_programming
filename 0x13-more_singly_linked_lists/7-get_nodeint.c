#include "lists.h"

/**
*get_nodeint_at_index - returns nth node of list
*@head: pointer to the head of the list
*@index: index of the node to return
*Return: node at the given index in the list
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i;

	i = 0;
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
