#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
*add_node_end - adds a new node at the end of a list
*@head: reference to head
*@str: string value of node
*Return: address of the new element, NULL if it failed
**/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	size_t i;

	i = 0;
	temp1 = *head;
	
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (0);

	while (str[i] != '\0')
		i++;

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = i;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (temp1->next)
			temp1 = temp1->next;
		temp1->next = temp;
	}
	return (*head);
}
