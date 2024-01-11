/*
 * mian.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include <stdio.h>

int isPowerOf3(int num)
{

    while (num > 1)
    {
        if (num % 3 != 0)
        {
            return 0;
        }
        num /= 3;
    }
    return (num == 1);
}

int main()
{
    int number;
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &number);

    if (isPowerOf3(number))
    {
        printf("%d is a power of 3.\n", number);
    }
    else
    {
        printf("%d is not a power of 3.\n", number);
    }

    return 0;
}

