/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include <stdio.h>
int unique(int arr[], int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result ^= arr[i];
	}
	return result;
}

int main()
{
	int arr[10];
	int i, n;
	printf("Enter Array size: ");
	fflush(stdout);
	scanf("%d", &n);

	printf("Enter Array Elements:  \n");
	fflush(stdout);
	for(i =0; i < n; i++)
		scanf("%d", &arr[i]);

	int un = unique(arr, n);

	printf("The unique number is: %d\n", un);

	return 0;
}
