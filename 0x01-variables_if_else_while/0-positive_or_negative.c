#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is postive,negative or 0
 * Return : Always 0 
 */
int main(void)
{
	int n;
	
	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n",n);
	}
	else if (n ==0)
	{
		printf("%d is zero \n");
	}
	else
	{
		printf("%d is negative\n");
	}
	
	return (0);
}	
