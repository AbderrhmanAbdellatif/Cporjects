#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <string.h>
#define ROW 3
#define COL 4

typedef struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}book;

int sumRow(int* p, int row);
int max(int* p);
void printBook(book book);
int main(int argc, char** argv) {
	int Array[ROW][COL] = { {1,22,34,84},{5,66,58,7},{54,54,6,41} };
	int maximum = max(&Array[0][0]);
	printf(" ==> max %d \n", maximum);
	int row = 1;
	printf("row : %d\n", row);
	int sumofrow = sumRow(&Array[0][0], row);
	printf("Sum Of Row %d\n", sumofrow);
	printf("-----------struct-----------\n");
	book b;
	strcpy_s(b.author, "Ali Nizam");
	strcpy_s(b.subject, "Veri tebani");
	strcpy_s(b.title, "Saygilarimla");
	b.book_id = 5984;
	printBook(b);


/*
	Pozitif ve negatif değerler içeren sayısal bir
	sinyalin ölçümleri 20 elemanlı float türü bir dizide tutulmaktadır.
	Sinyalin 0 geçişi sayısını bulan programı yazınız. 
	0 Geçişi sinyalin pozitiften negatife ya da negatiften pozitife geçiş sayısıdır. 
	(Not: Geçiş sayısı fonksiyonda hesaplanıp ana programda yazdırılacaktır).
*/

	float arraysingal[20] = {-1, 3, 4, -1, -3, 2, -4, -4, 5, 6, 4, 2, -2, -3, 1, 2 };
	int Size, i , Positive_Count = 0, Negative_Count = 0;
	for (i = 0; i < 20; i++)
	{
		if (arraysingal[i] < 0)
		{	
			Negative_Count++;
		}
	}
	printf("\n dizisi icin sonuc = %d\n ", Negative_Count);
	return 0;
}

int sumRow(int* p, int row)
{
	int i = 0, j = 0, sum = 0;
	for (j = 0; j < COL; ++j)// Loop for coloum
	{

		sum = sum + *(p + (row * COL) + j);
	}

	return sum;
}
int max(int* p) {

	//int* p = NULL; //pointer to integer
	int i = 0, j = 0;

	int maximum = 0;

	//piData = &Array[0][0]; //You can also write *aiData
	for (i = 0; i < ROW; ++i) //Loop of row
	{
		for (j = 0; j < COL; ++j)// Loop for coloum
		{
			//Read element of 2D array

			//*(p + (i * COL)  + j) ==> Array[i][j] 
			printf("Array[%d][%d] = %d\n", i, j, *(p + (i * COL) + j));
			if (*(p + (i * COL) + j) > maximum)  //Array[i][j] > max
			{
				maximum = *(p + (i * COL) + j); // max =Array[i][j]
			}

		}

	}
	return maximum;
}


/*
void printBook(struct Books *book) şeklinde prototipi
verilen fonksiyona ana programdan girilen book özellikleri
gönderilecek ve fonksiyonda gösterilecektir. C kodunu yazınız.

*/
void printBook(book book)
{
	printf("title %s\n", book.title);
	printf("Subject %s\n", book.subject);
	printf("Author %s\n", book.author);
	printf("Book id %d \n ", book.book_id);
}