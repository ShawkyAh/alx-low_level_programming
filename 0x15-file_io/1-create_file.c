#include "main.h"
/**
* _strlen - returns the length of a string
*@s: the string
*Return: intger length of string
*/
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}


/**
*create_file - creats a file
*@filename: name of file to create
*@text_content: text to write
*
*Return: 1 on success 0 on failure
*/ 

int create_file(const char *filename, char *text_content)
{
int az;
ssize_t b = 0, len = _strlen(text_content);

if (!filename)
return (-1);
az = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (az == -1)
return (-1);
if (len)
b = write(az, text_content, len);
close(az);
return (bytes == len ? 1 : -1);
}
