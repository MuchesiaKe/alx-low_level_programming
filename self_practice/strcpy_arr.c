#include <stdio.h>

/**
*strcpy_arr - copies string b into a
*@a: first string
*b: second string
*/

void strcpy_arr(char a[], char b[])
{
	int i;

	i = 0;
	while ((a[i] = b[i]) != '\0')
		i++;
}

int main(void)
{
	char x[10] = "helloooooo", y[7] = "world";

	strcpy_arr(x, y);
	printf("%s\n", x);
	printf("%s\n", y);
	return (0);
}
