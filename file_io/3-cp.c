#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: argument. 
 * @argv: argument
 * Return: 0.
 **/
#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
int fd_from, fd_to, ret;
char buf[BUF_SIZE];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

while ((ret = read(fd_from, buf, BUF_SIZE)) > 0)
if (write(fd_to, buf, ret) != ret)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

if (ret == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

if (close(fd_from) == -1 || close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
	fd_from > fd_to ? fd_from : fd_to), exit(100);
return (0);
}

