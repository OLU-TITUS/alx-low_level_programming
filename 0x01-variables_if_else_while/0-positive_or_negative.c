#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry
 *
 *  Return: Always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("The number is positive: %d\n", n);
	else if (n == 0)
		printf("The number is zero: %d\n");
	else (n < 0)
		printf("The numberis negative: %d\n");
	return (0);
}
