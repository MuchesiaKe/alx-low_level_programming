#include <stdio.h>

/**
*main - runs the temp_convert function
*Return: always (0)
*/

int temp_convert();

int main(void)
{
	temp_convert();
	return (0);
}

/**
*temp_convert- convert temperature to celsius
*@fahr: temp in fahrenheit
*Return: Converted temperature
*/

int temp_convert()
{
	int upper, i;
	double celsius;

	upper = 300;

	for (i = 0; i <= upper; i =  i + 20)
	{
		celsius = 5 * (i - 32) / 9;
		printf("%d\t%f\n", i, celsius);
	}
	return (celsius);
}
