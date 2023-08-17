/**
*int_index - searches for an integer
*@size: number of elements in the array
*@cmp: pointer to the function to be used to compare values
*@array: array to be searched
*Return: index of the found element, -1 otherwise
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	if (cmp(*(array + (sizeof(*array) * i))))
		return (i);
	return (-1);
}
