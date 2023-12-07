#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file, file_w , i;
	char *array;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_CREAT,0600);
	if (file == -1)
	{
		return (0);
	}
    for (i=0;text_content !=NULL;i++)
    {
	array[i]=text_content[i];
    file_w = write(file,text_content,i);
    if(file_w==-1)
    {
        return(0);
    }
    free (array);
    close (file);
	
}
