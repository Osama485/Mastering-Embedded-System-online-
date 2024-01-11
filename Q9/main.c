/*
 * main.c
 *
 *  Created on: ٢٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include <stdio.h>
int maxOnesBetweenZeros(int num) {
	int maxCount = 0;
	int currentCount = 0;
	int zeroEncountered = 0;
	while (num != 0) {
		int bit = num % 2;
		if (bit == 1) {

			currentCount++;
			if (zeroEncountered) {
				maxCount = (currentCount > maxCount) ? currentCount : maxCount;
			}
		} else {
			currentCount = 0;
			zeroEncountered = 1;
		}
		num >>= 1;
	}

	return maxCount;
}

int main() {
	int binaryNumber;
	printf("Enter your Number: ");
	fflush(stdout);
	scanf("%d", &binaryNumber);
	printf("Max number of ones between two zeros: %d\n", maxOnesBetweenZeros(binaryNumber));

	return 0;
}
