#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
*add_node_end - adds a new node at the end of list
*@head: reference to head
*@str: value of node
*Return: address of the new element, of NULL if it failed
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;

	while ((*head)->next != NULL)
		*head = (*head)->next;
	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	last_node->str = strdup(str);
	(*head)->next = last_node;
	last_node->next = NULL;
	return (last_node);
}
