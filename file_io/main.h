#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is a pointer to a string.
 * @letters: represents the number of bytes to be read from and written
 * to the file.
 * Return:returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0 .
 **/
ssize_t read_textfile(const char *filename, size_t letters); /** 0 **/
/**
 * create_file - creates a function that creates a file.
 * @filename: name of the file to create.
 * @text_content: string.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content); /** 1 **/
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append.
 * @text_content: text to append.
 * Return: 1 on success and -1 on failure.
 **/
int append_text_to_file(const char *filename, char *text_content); /** 2 **/

#endif
