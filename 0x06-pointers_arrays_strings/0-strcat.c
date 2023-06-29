/**
*_strcat - appends src to the dest
*
*@dest : string to appended onto
*@src : string to append to
*
*Return: pointer to dest
**/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
