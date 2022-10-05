#include <stdio.h>

/**
*main- illustrate concept of argc and argv
*@argc : counts number of arguements passed
*@argv : vector of arguments passed
*Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int count;

	printf("This program waas called with \"%s\".\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("argv[%d] = %s\n", count, argv[count]);
	}
		else
			printf("The command had no other arguements. \n");
	return  (0);
}
