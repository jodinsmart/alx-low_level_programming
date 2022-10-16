#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: prints "is it greater than five or is less than six"
 * Return: 0
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	/* your code goes there */
	if (num > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}

	else if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
		else if (num < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}

	return (0);
}
