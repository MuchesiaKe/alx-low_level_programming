/**
*swap_int - swaps values of two integers
*
*@a : first value to be swapped
*@b : the other value to be swapped
**/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
