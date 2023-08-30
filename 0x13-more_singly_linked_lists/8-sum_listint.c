#include "lists.h"

/**
*sum_listint - returns sum of all the data(n)
*@head: reference to the head of the list
*Return: sum of all the data of the list
**/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
