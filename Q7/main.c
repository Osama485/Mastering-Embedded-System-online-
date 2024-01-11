/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include <stdio.h>

int rep(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int x = 100;
    rep(x);
    printf("the sum number from 1 to 100 is %d\n", rep(x));
    return 0;
}
