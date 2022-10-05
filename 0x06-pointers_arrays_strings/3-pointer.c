#include <stdio.h>

/**
*main- checking deferencing for other data types
*
*Return: Always 0
*/

int main(void)
{
int n, *p;
int c, *pp;

c = 'H';
pp = &c;
n = 98;
p = &n;

printf("Value of 'c': %c\n", c);
printf("Address of 'c': %p\n", &c);
printf("Value of 'pp': %p\n", pp);
printf("Value of 'n': %d\n", n);
printf("Address of 'n': %p\n", &n);
printf("Value of 'p': %p\n", p);

*p = 402;
*pp = 'o';
printf("Value of 'n': %d\n", n);
printf("Value of '*pp': %d\n", *pp);
printf("Value of 'c': %d ('%c')\n", c, c);
printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
return (0);
}
