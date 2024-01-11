/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */
#include <stdio.h>

int count_ones_in_binary(int num)
{
	int count = 0;
	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return count;
}
int main() {
	int b;
	printf("Enter your Number: ");
	fflush(stdout);
	scanf("%d", &b);
	printf("Number of ones in the binary number: %d\n",count_ones_in_binary(b));

	return 0;
}
