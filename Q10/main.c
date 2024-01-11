/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
void reverseWords(char *str)
{
    int length = strlen(str);
    reverse(str, str + length - 1);

    char *word_start = str;
    char *word_end = str;

    while (*word_end)
    {
        if (*word_end == ' ')
        {
            reverse(word_start, word_end - 1);
            word_start = word_end + 1;
        }
        word_end++;
    }
    reverse(word_start, word_end - 1);
}

int main()
{
	char input[] = "you hi";
    printf("Original string: %s\n", input);
    reverseWords(input);
    printf("Reversed words: %s\n", input);

    return 0;
}

