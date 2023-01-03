/**
*_memcpy - copies memory area
*@dest: copying destination
*@src: location to copy from
*@n: size of memory area to copy
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (dest);
}
