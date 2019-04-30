// TABANAYUVARLAMA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{

	int sum;
	float money;

	printf("Please enter an integer value ");
	scanf("%d", &sum);

	
	printf("Please enter a float variable ");
	scanf("%f", &money);

	printf("\nThe variables you entered were\n");
	printf("value of sum = %d\n", sum);
	printf("value of money = %f\n", money);
	system("pause");
    return 0;
}

