/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */
#include<stdio.h>
int Prime(int i, int number)
{
	if(number == i)
		return 0;
	else if(number % i == 0)
		return 1;
	else
		return Prime(i+1 ,number);
}

int main()
{
	int n1, i, n2;
	printf("enter two numbers: ");
	fflush(stdout);
	scanf("%d %d",&n1, &n2);

	printf("the prime numbers between %d and %d: \n", n1, n2);
	for(i = n1 ; i <= n2 ; i++)
	{
		if(Prime(2 ,i) == 0)
			printf("%d ",i);
	}
	return 0;

}

