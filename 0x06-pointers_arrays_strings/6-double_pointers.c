#include <stdio.h>

/**
*main - Illustrates double pointers
*
*Return: Always return 0
*/

int main(void)
{
	int num = 123;
	int *ptr, **ptr1;

	ptr1 = &ptr;
	ptr = &num;
	printf("Value of num is:\n");
	printf("\t num = : %d \n",num);
	printf("\t *ptr = : %d \n", *ptr);
	printf("\t **ptr = : %d \n\n", **ptr1);

	printf("Address of num is:\n");
	printf("\t &num = : %p \n", &num);
	printf("\t ptr = : %p \n", ptr);
	printf("\t *ptr1 = : %p \n\n", *ptr1);

	printf("Value of pointers is:\n ");
	printf("\t ptr =  %p \n", ptr);
	printf("\t ptr1 = : %p \n\n", ptr1);

	printf("Address of the  pointer:\n");
	printf("\t &ptr = : %p \n", &ptr);
	printf("\t ptr1 = : %p \n\n", ptr1);

	printf("Double pointer address and value:\n");
	printf("\t &ptr1 = %p \n", &ptr1);
	printf("\t ptr1 = %p \n\n", ptr1); 
}
