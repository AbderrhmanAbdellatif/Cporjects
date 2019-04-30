// TABANAYUVARLAMA.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int TABANAYUVARLAMA(float sayi,int deger);
int main()
{
	// soru 1
	/*
	int sum;
	float money;

	printf("Please enter an integer value ");
	scanf("%d", &sum);

	
	printf("Please enter a float variable ");
	scanf("%f", &money);

	printf("\nThe variables you entered were\n");
	printf("value of sum = %d\n", sum);
	printf("value of money = %f\n", money);
	int yakindeger = TABANAYUVARLAMA(money,sum);
	printf("\n TABANAYUVARLAMA degeri %d \n",yakindeger);
	*/

	// soru 2 
	int  B[4][4],C[4][2];

	for (size_t i = 0; i <4; i++)
	{
		for (size_t j = 0; j <4; j++)
		{
			printf(" B [%d][%d] : ",i,j);
			scanf("%d", &B[i][j]);
		}
	}


	for (size_t i = 0; i <4; i++)
	{
		for (size_t j = 0; j <4; j++)
		{
			printf(" %d ",B[i][j]);
		}
		printf(" \n ");
	}


	int k = 0;
	for (size_t i = 0; i <4; i++)
	{
		for (size_t j = 0; j <4; j=j+2)
		{    
			if (k>1)
			{
				k = 0;
			}
			if (B[i][j]<B[i][j+1]) {
				C[i][k] = B[i][j+1];
			}
			else
			{
				C[i][k] = B[i][j];
			}
			k++;
		}
		printf(" \n ");
	}

	for (size_t i = 0; i <4; i++)
	{
		for (size_t j = 0; j <2; j++)
		{
			printf(" %d ", C[i][j]);
		}
		printf(" \n ");
	}



	system("pause");
    return 0;
}

int TABANAYUVARLAMA(float sayi, int deger)
{
	int temp = 0;
	for (size_t i = 1; i <= sayi; i++)
	{
		
		if (deger<sayi)
		{
			temp = deger;
		}
		else
		{
			break;
		}
		deger = deger * temp;

	}

	return temp;
}
