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

for (m = 48; m <= 57; m++)
{
	putchar(m);
if (m != 57)
{
	putchar(44);
	putchar(32);
}

}
putchar(10);
return (0);
}


