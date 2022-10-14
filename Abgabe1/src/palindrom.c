/*
 * palindrom.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void checkPalindrom(int n)
{
	int posNum[20];
	int counter = 0;

	while(n > 0)
	{
		posNum[counter] = n % 10;
		n /= 10;
		counter++;
	}


	int r = counter - 1;
	int l = 0;

	do
	{
		if (!(posNum[l] == posNum[r]))
		{
			printf("kein Palindrom \n");
			goto finish;
		}
	}while(((r--) - (l++)) >= 2);

	printf("Palindrom \n");

	finish:
}

