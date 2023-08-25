/**
*free_list - frees the list
*@head: pointer to the list
**/

void free_list(list_t *head)
{
	list_t temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
