#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:name of the file
 * @text_content:char
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, file_w;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		file_w = write(file, text_content, strlen(text_content));
		if (file_w == -1)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
