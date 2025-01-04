#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if(n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(void)
{
	printf("Factorial of __?\n");
	
	int n;
	scanf("%d", &n);
	if(n <= 0)
	{
		fprintf(stderr, "Incorrect Usage!");
		exit(EXIT_FAILURE);
	}

	printf("%d\n", factorial(n));
	return 0;
}
