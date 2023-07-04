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
int aaa, bbb;

for (aaa = 0; aaa < 8; aaa++)
{
for (bbb = 0; bbb < 8; bbb++)
{
_putchar(a[aaa][bbb]);
}
_putchar('\n');
}
}
