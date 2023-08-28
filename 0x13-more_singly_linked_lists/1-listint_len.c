#include "lists.h"

/**
*listint_len - returns the number of elements in a linked list
*@h: pointer to the list
*Return: number of elements in the h
**/

size_t listint_len(const listint_t *h)
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
