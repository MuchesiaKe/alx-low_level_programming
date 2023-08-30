#include "lists.h"

/**
*pop_listint - deletes head node of the list
*@head: pointer to the list
*Return: head node data
**/

int pop_listint(listint_t **head)
{
	listint_t *free_head;
	int head_n;

	free_head = *head;
	head_n = (*head)->n;
	*head = (*head)->next;
	free(free_head);
	return (head_n);
}
