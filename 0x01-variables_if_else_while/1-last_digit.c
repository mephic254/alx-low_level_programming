#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-will evaluate intergers from 0 to 6
*if loops checks
*
* n is an integer
* Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("and is 0");
}
if (n < 6 || n != 0)
{
printf("leess than 6 and not 0");
}
printf("\n");
return (0);
}


