#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * Write a function to determine if a number is prime
 *
 * prime number = a number greater than one that cannot be divided by any whole number 
 * other than itself
 *
 */


void prime_check(int num)
{
	if(num <= 1)
	{
		printf("Number {%d} is not prime!\n", num);
		return;
	}

	for(int i = 2; i <= sqrt(num); ++i)
	{
		if(num % i == 0)
		{
			printf("Number {%d} is not prime!\n", num);
			return;
		}
	}
	printf("Number {%d} is prime!\n", num);
	return;
}

int main(void)
{
	while(1)
	{
		printf("Enter a Number to test, or enter 0 to exit\n");
	
		int n;
		scanf("%d", &n);
		if(n == 0)
			return 0;
		prime_check(n);
	}
	return 0;
}
