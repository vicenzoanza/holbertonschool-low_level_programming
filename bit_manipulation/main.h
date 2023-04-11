#ifndef _MAIN_H
#define _MAIN_H

unsigned int binary_to_uint(const char *b); /** 0 **/
void print_binary(unsigned long int n); /** 1 **/
int get_bit(unsigned long int n, unsigned int index); /** 2 **/
int set_bit(unsigned long int *n, unsigned int index); /** 3 **/
int clear_bit(unsigned long int *n, unsigned int index); /** 4 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m); /** 5 **/

#endif
