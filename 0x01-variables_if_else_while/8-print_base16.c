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
int m = 97;
int n = 48;
while (m <= 102)
{
for (; n <= 57; n++)
{
	putchar (n);
}
	putchar(m);
	m++;
}
putchar(10);
return (0);
}


