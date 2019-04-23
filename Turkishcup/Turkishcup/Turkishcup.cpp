#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <time.h>
#include <cstdio>

void sort();
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
	
	char* list[36];
	char* Mix[8][4];
	int buffsize = maxlen * sizeof(char);
	char buff[100];

	int i = 0;
	while (fgets(buff, buffsize, file))
	{

		list[i] =(char *)malloc(strlen(buff) * sizeof(char));
		strcpy(list[i], buff);
		i++;
	}

	fclose(file);
 //   int c = 0;
	//for (c; c <nlines; c++)
	//{
	//	printf("%s", list[c]);
	//}
	int i_index, j_index;


	for (i = 0; i <=8; i++) {
		for (j = 0; j <=4; j++) {
			Mix[i][j] = (char*)malloc(strlen(buff) * sizeof(char));
		}
	}

	for (i = 0; i <=8; i++) {
		
		for (j = 0; j <=4; j++) {
			srand(time(NULL));
			int randomIndex = rand() % nlines;
			list[randomIndex];

			for (k = 0; k <=8; k++) {
				for (m = 0; m <=4; m++) {
					if (strcmp(list[randomIndex], Mix[k][m]) == 0)
					{
						contorl = 1;
						break;
					}
					else
					{
						contorl = 2;
						
					}
				}
				if (contorl==1) {

					break;
				}
			}
			
			if (contorl == 2)
			{
				strcpy(Mix[i][j],list[randomIndex]);
				contorl = 0;
				i_index = i;
				j_index = j;
			}else {
				i = i_index;
				j = j_index;
			}

		}
	}
	

	for (k = 0; k <=8; k++) {
		for (m = 0; m <=4; m++) {
			printf("%s", Mix[k][m]);
		}
		printf("\n");
	}
	free(list);
	free(Mix);

}

void sort()
{

	char name[10][8], tname[10][8], temp[8];
	int i, j, n;

	printf("Enter the value of n \n");
	scanf("%d", &n);
	printf("Enter %d names n \n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
		strcpy(tname[i], name[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}

	printf("\n----------------------------------------\n");
	printf("Input NamestSorted names\n");
	printf("------------------------------------------\n");

	for (i = 0; i < n; i++)
	{
		printf("%s\t\t%s\n", tname[i], name[i]);
	}

	printf("------------------------------------------\n");




}
