/**
*_strcpy - concetenate a string
*@dest : string to concetenate onto
*@src : string to add to end of dest
*Return: pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
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
