/**
*_memset - fills memory with a constant byte
*@s : pointer to the memory
*@b: constant byte to be filled
*@n : size of the memory
*Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (s);
}
