#include <stdio.h>
#define ALLOCSIZE 1000 /*size of available space*/

static char allocbuf[ALLOCSIZE]; /*storage for alloc*/
static char *allocp = allocbuf; /* next free position */

char *alloc(int n) /* return pointer to n characters */
{
	if (allocbuf + 	ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return allocp - n; /* old p */
	}
	else /* not enough room */
		return (0);
}

void afree(char *p) /* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

int main(void)
{
	printf("%p\n", alloc(330));
	printf("%p\n", alloc(5));
	return (0);
}
