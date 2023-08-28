#include "lists.h"
#include <string.h>

/**
*add_node - adds a new node at the beginning of the list
*@head: pointer to the head
*@str: value of the node
*Return: address of the new element
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t i;

	i = 0;


	while (str[i++]);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp->str);
		return (NULL);
	}
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (*head);
}
