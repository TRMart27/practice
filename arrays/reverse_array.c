#include <stdlib.h>
#include <stdio.h>

void print_arr(int* arr, int size)
{
	for(int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
void reverse_array(int* arr, int size)
{
	int p1 = 0;
	int p2 = size - 1;

	while(p2 > p1)
	{
		int t = arr[p2];
		arr[p2] = arr[p1];
		arr[p1] = t;
		
		p1++;
		p2--;
	}
	return;
}


int main(void)
{
	int* arr = (int*)malloc(5 * sizeof(int));
	for(int i = 0; i < 5; ++i)
		arr[i] = i * 3;

	print_arr(arr, 5);
	reverse_array(arr, 5);
		
	printf("After reversal :: \n");
	print_arr(arr, 5);

	free(arr);
	return 0;
}

