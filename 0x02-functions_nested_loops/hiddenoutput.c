#include <stdio.h>

int main()
{
	int a[] = {3, 56, 78, 39};
	int i;
	
	for (i = 0; i < 4; i++)
		printf("&a[%d]: %p\n", i, &a[i]);
/**
	printf("&a[0]: %p\n", &a[0]);
	printf("&a[1]: %p\n", &a[1]);
	printf("&a[2]: %p\n", &a[2]);
	printf("&a[3]: %p\n", &a[3]);
*/
	int *p = &a[1] + 1;
	printf("*p: %d\n", *p);
	p -= 1;
	printf("*p: %d\n", *p);	
	printf("The difference between the first and last element of the array is: %ld\n", &a[0] - &a[3]);
}
