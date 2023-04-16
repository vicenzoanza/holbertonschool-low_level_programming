#include "main.h"
/**
 * create_file - creates a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: string.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int n, bt, text = 0;

if (!filename)
return (-1);

n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (n == -1)
return (-1);

if (text_content)
	{
	while (text_content[text])
	text++;
	bt = write(n, text_content, text);
	if (bt != text)
	return (-1);
	}
close(n);
return (1);
}
