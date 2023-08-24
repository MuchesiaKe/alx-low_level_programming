#include "lists.h"
#include <stdio.h>

/**
*print_list - prints all elements of a list
*@h: list to print
*Return: number of nodes
**/

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		while (h)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
			h = h->next;
		}
	}
	return (i);
}
