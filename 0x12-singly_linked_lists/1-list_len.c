#include "lists.h"

/**
*list_len - returns the number of elements in a linked list
*@h: linked list
*Return: number of elements in h
**/

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
