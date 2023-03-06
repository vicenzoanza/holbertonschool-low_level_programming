#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print chessboard.
 *
 **/
void print_chessboard(char (*a)[8])
{
int black, white;
for (black = 0; black < 8; black++)
{
for (white = 0; white < 8; white++)
{
putchar(a[black][white]);
}
putchar('\n');
}
}
