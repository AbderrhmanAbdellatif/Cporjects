#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	FILE* file = fopen("takimlar.txt", "r");
	if (file == NULL)printf("Can't read %s", "takimlar.txt");
    char cbuff;
    int nlines = 36; //counter of new lines
	int chr = 0; //counter of chars (except new line char)
    int maxlen = 50;
	
	printf("lines: %d\nmax string len: %d\n\n", nlines, maxlen);
	
	char* list[36];

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

	int c = 0;
	for (c; c <nlines; c++)
	{
		printf("%s", list[c]);
	}
}