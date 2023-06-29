/**
*_strncpy - copies a string
*
*@dest : copying destination
*@src : string source
*@n : number of bytes to copy
*Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	return (dest);
}
