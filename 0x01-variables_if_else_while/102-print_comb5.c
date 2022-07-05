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
	putchar(m);
	putchar(n);
		if (m != 48 || n != 49)
		{
			putchar(44);
			putchar(32);
		}
}
}
putchar(10);
return (0);
}


