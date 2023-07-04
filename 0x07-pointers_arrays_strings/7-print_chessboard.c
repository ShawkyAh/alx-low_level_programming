#include "main.h"

/**
* print_chessboard - prints chessboard
*
*@a: raw
*
*Return: nothing
*/

void print_chessboard(char (*a)[8])
{
int aza, bzb;

for (aza = 0; aza < 8; aza++)
{
for (bzb = 0; zbb < 8; bzb++)
{
putchar(a[aza][bzb]);
}
putchar('\n');
}
}
