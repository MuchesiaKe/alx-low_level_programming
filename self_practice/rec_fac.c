#include <unistd.h>

/**
*print_char- writes char to std output
*@c: char to be written
*/

void print_char(char c)
{
	write(1, &c, 1);
}

/**
*print_all_letters_starting_from- prints characters from given point
*@c: starting point of printing
*/

void print_all_letters_starting_from(char c)
{
	if (c > 'z')
		return;
	print_char(c);
	print_all_letters_starting_from(c + 1);
}

/**
*print_alphabet - calls the recursive function
*/

void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}

/**
*main - executes the program
*Return: Always (0)
*/

int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
