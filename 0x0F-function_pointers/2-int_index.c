/**
*int_index - searches for an integer
*@array: array characters to search
*@size: number of elements in the array
*@cmp: compare function
*Return: index of first element if comp != 0
*-1 if no element or size <= 0
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
