#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, file_r, file_w;
	char *array;
	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	array = malloc(sizeof(char) * letters);
	if (array == NULL)
	{
		return (0);
	}
	file_r = read(file, array, letters);
	if (file_r == -1)
	{
		return (0);
	}
	file_w = write(STDOUT_FILENO, array, file_r);
	if (file_w == -1)
	{
		return (0);
	}
	free(array);
	close(file);
	return (file_w);
}