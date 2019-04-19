// Turkishcup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
#include <time.h>

struct String
{
	char a[100];
};
//Here I make 100 line so that you can read 100 line of text file
struct String cur_member[36];
struct String Mix_Knee[8][4];

int main(void) {

	FILE* myfile = fopen("takimlar.txt", "r");
	if (myfile == NULL) {
		printf("Cannot open file.\n");
		return 1;
	}
	else {
		//Check for number of line
		char ch;
		int count = 1;
		do
		{
			ch = fgetc(myfile);
			if (ch == '\n') count++;
		} while (ch != EOF);
		rewind(myfile);
        int i;
		for (i = 0; i < count; i++) {
			fscanf(myfile, " %[^\n]", cur_member[i].a);
		}
		for (i = 0; i < count; i++) {
			printf("%s\n", cur_member[i].a);
		}
		int k=0, m=0, j=0;
		srand(time(NULL));
		int contorl = 0;
		for (i = 0; i < 8; i++) {
			int randomIndex = rand() % count;
			for (j = 0; j < 4; j++) {
				cur_member[randomIndex].a;
				
				for (k = 0; k < 8; k++) {
					for (m = 0; m < 4; m++) {
						if (strcmp(cur_member[randomIndex].a,Mix_Knee[k][m].a)==0)
						{
							contorl = 1;
							break;
						}
						else
						{
							contorl = 2;
						}
					}
				}

				if (contorl==2)
				{
					Mix_Knee[k][m].a =cur_member[randomIndex].a;
					contorl = 0;
				}

			}
		}


		for (k = 0; k < 8; k++) {
			for (m = 0; m < 4; m++) {
				printf(" %s ", Mix_Knee[k][m].a);
			}
			printf("\n");
		}


	}
}

