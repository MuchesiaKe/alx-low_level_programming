/**
*_strncat - appends src to the dest
*
*@dest : string to appended onto
*@src : string to append to
*@n : number of bytes to copy
*
*Return: pointer to dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[++i])
		;
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
