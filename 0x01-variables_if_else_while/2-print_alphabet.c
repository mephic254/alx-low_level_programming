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
int alp;
for (alp = 97; alp <= 122; alp++)
{
putchar (alp);
}
putchar (10);
return (0);
}


