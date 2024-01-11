/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
int sumDigit(int n);
int main()
{
	int num;
	printf("Enter number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("sum of digits ==> %d", sumDigit(num));
	return 0;
}

int sumDigit(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
