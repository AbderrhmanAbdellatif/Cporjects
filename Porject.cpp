/*
============================================================================
Name        : Working.c
Author      : suilman
Version     :
Copyright   : Your copyright notice
Description :porgram in C, Ansi-style
============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int i=0,k=0, n = 0,j=0,m=0,u=0;
	int value = 0;
	int Mul = 1;
	time_t t;
	int arr[5][5];
	int max = 0, min =100;
	srand((unsigned)time(&t));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = rand() % 20;
			printf("  [ %d ]  ", arr[i][j]);
		}
		printf("\n");
	}
	printf(" sayi      satir  Sutun ");
	for (i = 0; i <5; i++) {
		//carpim = 1;
		for (j = 0; j <5; j++) {
			value = arr[i][j];//the value from matrix
			for (k = 1; k<value; k++) {
				if (value % k == 0) {
					Mul *= k;
				}
				if (Mul == value) {
					
					printf(" \n %d        %d       %d   ", value,i,j);
					if (value > max )max = value;
					if (value < min )min = value;
					Mul = 1;
				}
			}
			Mul = 1;
		}
	Mul = 1;
	}
	printf(" \n max : %d", max);
	printf(" \n min : %d\n", min);
   return(0);
}
