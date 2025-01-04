#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>



void find_min_max(int* arr, int size, int* max, int* min)
{
	assert(arr);	

	*max = arr[0];
	*min = arr[0];

	for(int i = 0; i < size; ++i) 
	{
		if(arr[i] > *max)
		{
			*max = arr[i];
			continue;
		}		
		if(arr[i] < *min)
			*min = arr[i];
	}
}


void print_arr(int* arr, int size)
{
	assert(arr);

	for(int i = 0; i < size; ++i)
		printf("%d\t", arr[i]);
	printf("\n");
}

#define PRINT(arr) print_arr( (arr) , 10)
int main(void)
{
	srand(time(NULL));
	int* arr = (int*)malloc(10 * sizeof(int));
	assert(arr);
	
	
	printf("Array size __?\n");
	

	int n;
	scanf("%d", &n);
	

	if(n <= 0)
	{
		fprintf(stderr, "Incorrect Usage!\n");
		exit(EXIT_FAILURE);
	}


	for(int i = 0; i < n; ++i)
		arr[i] = rand() % 100 + 1;
	PRINT(arr);


	int max, min;
	find_min_max(arr, n, &max, &min);
	printf("Max :: %d\nMin :: %d\n", max, min);


	return 0;
}
