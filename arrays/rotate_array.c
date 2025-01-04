#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>

void reverse_arr(int* arr, int start, int end)
{
	assert(arr);
	
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
}

void print_arr(int* arr, int size)
{
	assert(arr);

	for(int i = 0; i < size; ++i)
		printf("%d\t", arr[i]);
	printf("\n");
}

void rotate_arr_right(int* arr, int size, int step)
{
	assert(arr);
	
	reverse_arr(arr, 0, size - 1);
	reverse_arr(arr, 0, step - 1);
	reverse_arr(arr, step, size - 1);
}


void rotate_arr_left(int* arr, int size, int step)
{
	assert(arr);
	
	reverse_arr(arr, 0, (size - 1) );
	reverse_arr(arr, 0, (size - 1) - step);
	reverse_arr(arr, (size - step), size - 1);
}

#define PRINT(arr)  print_arr( (arr), 10);
int main(void)
{
	srand(time(NULL));

	int* arr = (int*)malloc(10 * sizeof(int));
	assert(arr);
	for(int i = 0; i < 10; ++i)
		arr[i] = rand() % 10 + 1;

	printf("Original arr ::\n");
	PRINT(arr);
	
	int rotate = rand() % 10 + 1;
	rotate_arr_right(arr, 10, rotate);
	printf("After %d Right Steps ::\n", rotate);
	PRINT(arr);
	
	rotate = rand() % 10 + 1;
	rotate_arr_left(arr, 10, rotate);
	printf("After %d Left Steps ::\n", rotate);
	PRINT(arr);
	
	return 0;
}
