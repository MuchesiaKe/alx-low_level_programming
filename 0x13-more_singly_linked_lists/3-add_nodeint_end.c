#include "lists.h"

/**
*add_nodeint_end - adds new node at the of a list
*@head: pointer to the list
*@n: value for the new list
*Return: address of the new element
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}
