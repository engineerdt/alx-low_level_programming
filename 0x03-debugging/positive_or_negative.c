#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * function positive_or_negative to test if nuumber passed is + or -
 */

/* betty style doc for function main goes there */
void positive_or_negative(int n)
{

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}