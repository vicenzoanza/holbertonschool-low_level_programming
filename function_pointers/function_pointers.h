#ifndef main_h
#define main_h

#include <stddef.h>

/* functions */

void print_name(char *name, void (*f)(char *)); /** 0 **/
void array_iterator(int *array, size_t size, void (*action)(int)); /** 1 **/
int int_index(int *array, int size, int (*cmp)(int)); /** 2 **/
#endif
