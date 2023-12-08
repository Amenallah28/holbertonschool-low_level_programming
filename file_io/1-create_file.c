#include "main.h"
/**
 * create_file-a function that reads a text file and prints it
 * @filename:char
 * @text_content:char;
 * Return:1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_CREAT | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}

	write(file, text_content, strlen(text_content));
	close(file);

	return (1);
}
