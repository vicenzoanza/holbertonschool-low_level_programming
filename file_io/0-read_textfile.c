#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is a pointer to a string.
 * @letters: represents the number of bytes to be read from and written
 * to the file.
 * Return:returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0 .
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t rd;


if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);

buf = malloc(letters);
if (!buf)
{
	close(fd);
	return (0);
}
rd = read(fd, buf, letters);
if (rd < 0 || write(STDOUT_FILENO, buf, rd) != rd)
{
	free(buf);
	close(fd);
	return (0);
}
free(buf);
close(fd);
return (rd);
}
