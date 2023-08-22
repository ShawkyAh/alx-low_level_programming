#include "main.h"

/**
*read_textfile - reads text from a file and prints it
*@filename: name of file to read
*@letters: number of bytes to read
*
*Return: number bytes read/printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int az;
ssize_t b;
char buf[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
az = open(filename, O_RDONLY);
if (az == -1)
return (0);
b = read(az, &buf[0], letters);
b = write(STDOUT_FILENO, &buf[0], b);
close(az);
return (b);
}
