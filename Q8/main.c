/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>

void reverse(int arr[], int size);
int main()
{
	int arr[10], i, n;
	printf("Enter Array size: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Enter Array Elements:  \n");
	fflush(stdout);
	for(i =0; i< n; i++)
		scanf("%d", &arr[i]);
	printf("the   real  Array is: ");
	for(i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\nThe Reverse array is: ");
	reverse(arr, n);
	return 0;
}

void reverse(int arr[], int size)
{
	int i;
	for(i = size-1; i >= 0; i--)
		printf("%d\t", arr[i]);
}
