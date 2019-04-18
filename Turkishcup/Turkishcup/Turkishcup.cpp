// Turkishcup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>


int main() {
	//while (1) {
	 //   int input = 0;
	char* Team[36] = {0}; /*array declaration */
	
	int indexofTeam = 0, i = 0;
	
	printf("\n 1. Takimlari oku \n 2. Karistir diz \n 3. Sirala \n 4. Ekrana bas \n 5. Dosyaya yaz \n 6. Exit \n");
	static const char filename[] = "takimlar.txt";
	FILE* file = fopen(filename, "r");
	if (file != NULL)
	{
		char line[128]; /* or other suitable maximum line size */
		while (fgets(line, sizeof line, file) != NULL) /* read a line */
		{
			// printf("[%s]size is [%d] \n",line,strlen(line)-1);
			Team[indexofTeam] = line;
			indexofTeam++;
			if (indexofTeam == 36)
			{
				break;
			}
		}
		fclose(file);
	}
	else
	{
		perror(filename); /* why didn't the file open? */
	}


	for (i = 0; i < 36; i++) {
		printf("[%s']", Team[i]);/* read data from an array*/
	}
	//	scanf("%d", &input);
	//	printf("%d",input);

	//}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
