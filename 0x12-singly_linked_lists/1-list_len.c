#include "lists.h"

/**
*list_len - return number of elements in a linked list
*@h : linked list
*Return: number of elements in list h
**/

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
