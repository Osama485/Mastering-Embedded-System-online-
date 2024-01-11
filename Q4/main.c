/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include <stdio.h>

int reverseDigits(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main()
{
    int number;
    printf("Enter an Number: ");
    fflush(stdout);
    scanf("%d", &number);
    printf("number you Entered is: %d\n", number);
    printf("Reversed number: %d\n", reverseDigits(number));

    return 0;
}
