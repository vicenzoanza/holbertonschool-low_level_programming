#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append.
 * @text_content: text to append.
 * Return: 1 on success and -1 on failure.
 **/
int append_text_to_file(const char *filename, char *text_content)
{
int n, bt = 0;

if (!filename)
return -1;

n = open(filename, O_WRONLY | O_APPEND);
if (n == -1)
return -1;

if (text_content)
bt = write(n, text_content, strlen(text_content));

close(n);
return (bt == -1) ? -1 : 1;
}
