/**
*_memset - fills n bytes of the memory
*@s: memory pointed to
*@b: bytes to fill the memory
*@n: number of bytes to fill
*Return: pointer to memory area filled
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*s++ = b;
	return (s);
}
