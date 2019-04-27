#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <time.h>
#include <cstdio>

void sort();
int wordtoarray(char* kelime, char* Mix[8][4]);
void main()
{
	FILE* file = fopen("takimlar.txt", "r");
	if (file == NULL)printf("Can't read %s", "takimlar.txt");
	char cbuff;
	int nlines = 36; //counter of new lines
	int chr = 0; //counter of chars (except new line char)
	int maxlen = 50;
	int k = 0, m = 0, j = 0;
	int contorl = 0;


	printf("lines: %d\nmax string len: %d\n\n", nlines, maxlen);

	char* list[36];// 36  takim
	char* Mix[8][4];
	int buffsize = maxlen * sizeof(char);
	char buff[100];

	int i = 0;
	while (fgets(buff, buffsize, file))
	{

		list[i] = (char*)malloc(strlen(buff) * sizeof(char));
		strcpy(list[i], buff);
		i++;
	}

	fclose(file);
	/*  int c = 0;
	  for (c; c <nlines; c++)
	  {
		  printf("%s", list[c]);
	  }*/
	// ----------------------------------step 2 
	srand(time(NULL));

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 4; j++) {
			int randomIndex = rand() % nlines + 1;
			Mix[i][j] = (char*)malloc(strlen(buff) * sizeof(char));
			strcpy(Mix[i][j], list[randomIndex]);// select the item from team and input to list of teams 
		}
	}

	for (k = 0; k < 8; k++) {
		for (m = 0; m < 4; m++) {
			printf("%s", Mix[k][m]);
		}
		printf("\n");
	}
	system("pause");
	//-------------------------- step  3 not done yet 
	//char  t[20];
	//printf("Enter any five string (name) : ");
	//
	//for (i = 1; i < 32; i++)
	//{
	//	for (j = 1; j < 32; j++)
	//	{
	//		if (strcmp(Mix[j - 1][i], Mix[j][i]) > 0)
	//		{
	//			strcpy(t, Mix[j - 1][i]);
	//			strcpy(Mix[j - 1][i],Mix[j][i]);
	//			strcpy(Mix[j][i], t);
	//		}
	//	}
	//}
	//printf("Strings (Names) in alphabetical order : \n");
	//for (i = 0; i < 32; i++)
	//{
	//	printf("%s\n", str[i]);
	//}



}
