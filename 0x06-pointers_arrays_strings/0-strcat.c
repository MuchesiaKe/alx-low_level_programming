char *_strcat(char *dest, char *src)
{
	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;

	for (ind = 0; src[ind]; ind++)
		dest[dest_len++] = src[ind];

	return (dest);
}
