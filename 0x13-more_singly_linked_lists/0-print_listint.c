#include "lists.h"
#include <stdio.h>

/**
*print_listint - prints all elements of listint_t
*@h: list head
*Return: the numbe of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	{
		printf("Empty list");
		return (-1);
	}
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
