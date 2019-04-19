// Turkishcup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>
#include  <stdlib.h>

struct String
{
	char a[100];
};
//Here I make 100 line so that you can read 100 line of text file
struct String cur_member[36];

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

	}
}
