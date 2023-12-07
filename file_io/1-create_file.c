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
		return (-1);
	}
    array =malloc(sizeof(char)*strlen(text_content));

    for (i=0;text_content[i] !='\0';i++)
    {
        array[i]=text_content[i];
    write(file,array,strlen(text_content));
    }
    if(file_w==-1)
    {
        return(-1);
    }
    close (file);	
   
    return(1);
}
