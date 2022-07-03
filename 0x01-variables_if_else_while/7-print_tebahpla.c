#include <stdio.h>
/**
*main-will print small letters
*for loop in ASCII
*
* alp is an integer
* Return: always 0
*/

int main(void)
{
int m;
for (m = 122; m >= 97; m--)
{
	putchar(m);
}
putchar(10);
return (0);
}


