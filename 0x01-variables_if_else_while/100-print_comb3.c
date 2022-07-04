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
int n;
for (m = 48; m <= 57; m++)
{
	for (n = 49; n <= 57; n++)
	{
	if (n > m)
	{
	putchar(44);
	putchar(32);
	}
	}
}
putchar(10);
return (0);
}


