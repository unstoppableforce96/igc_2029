#include <stdio.h>
#include <string.h>
#include <math.h>
int max_of_array(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void add_arrays(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i] + B[i]);	
	}
	printf("\n");
}
int get_char_sum(char string[])
{
	int sum = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		sum += string[i];
	}
	return sum;
}
void print_square_roots(double values[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%.2f\n", sqrt(values[i]));
	}
}
int main()
{
	int arr[] = {10, 20, 30, 40, 100, 27};
	printf("Max of array is: %d\n", max_of_array(arr, 6));
	
	int A[] = {7, 2, 8, 4};
	int B[] = {11, 16, 14, 17};
	add_arrays(A, B, 4);
	
	char name[] = "aA";
	printf("%d\n", get_char_sum(name));
	
	double v[] = {25.0, 26.7, 144.0, 250.45, 390.9};
	print_square_roots(v, 5);
	return 0;
}