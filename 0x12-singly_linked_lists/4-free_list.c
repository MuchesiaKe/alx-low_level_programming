/**
*free_list - frees the list
*@head: pointer to the list
**/

void free_list(list_t *head)
{
	while (head->next)
	{
		free(head);
		head = head->next;
	}
}
