#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*add_node - adds new node at the beginning
*@head: head of the node
*@str: element to add
*Return: address of the new element, null if it failed
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
