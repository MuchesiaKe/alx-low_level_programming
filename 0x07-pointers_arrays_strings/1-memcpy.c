/**
*_memcpy - copies memory area
*@dest : copy destination
*@src : copy source
*@n : size to copy
*Return: pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (dest);
}
