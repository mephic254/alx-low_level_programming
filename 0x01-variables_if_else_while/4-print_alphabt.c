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
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
	if (alp != 'q' && alp != 'q')
	{
		putchar(alp);
	}
}
putchar (10);
return (0);
}


