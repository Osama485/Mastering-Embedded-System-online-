/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>
#include<math.h>

double sqRoot(double n)
{
	return sqrt(n);
}

int main()
{
	int num;
	printf("Enter number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("squar of %d ==> %.3lf",num, sqRoot(num));
}
