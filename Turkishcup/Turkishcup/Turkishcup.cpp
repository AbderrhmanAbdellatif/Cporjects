#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <time.h>
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



	for (i = 0; i < 8; i++) {
		for (j = 0; j < 4; j++) {
			Mix[i][j] = (char*)malloc(strlen(buff) * sizeof(char));
		}
	}

	for (i = 0; i < 8; i++) {
		
		for (j = 0; j < 4; j++) {
			srand(time(NULL));
			int randomIndex = rand() % nlines;
			list[randomIndex];

			for (k = 0; k < 8; k++) {
				for (m = 0; m < 4; m++) {
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
				Mix[i][j]= list[randomIndex];
				contorl = 0;
			}

		}
	}


	for (k = 0; k < 8; k++) {
		for (m = 0; m < 4; m++) {
			printf("%s", Mix[k][m]);
		}
		printf("\n");
	}


}