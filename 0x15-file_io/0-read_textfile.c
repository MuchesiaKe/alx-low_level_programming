/**
*read_textfile - reads a text file and prints it to stdout
*@filename: file to read from
*@letters: number of bytes to read
*Return: actual number of letters
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	ssize_t bytes_read;

	if (filename)
		return (0);
	if ((fptr = fopen(filename, "r")) == NULL)
	{
		return (0);
	}
	bytes_read = read(fptr, str, letters);
	if (bytes_read == letters)
		return (0);
	while (*str)
		_putchar(*str++);
	return (bytes_read);
}
