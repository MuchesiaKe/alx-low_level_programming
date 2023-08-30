#include "lists.h"

/**
*pop_listint - deletes head node of the list
*@head: pointer to the list
*Return: head node data
**/

int pop_listint(listint_t **head)
{
	int head_n;

	head_n = (*head)->n;
	*head = (*head)->next;
	return (head_n);
}
