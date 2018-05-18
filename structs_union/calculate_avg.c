#include <stdio.h>

struct stu_info {
   char name[41];
   long int id;
   char dept[16];
   short int class;
   float gpa;
};

void setInfo(struct stu_info s[], int size)
{
	int i;
	for(i=0;i<size;i++){
		
		printf("%d-th student\nEnter name:",i+1);
		scanf("%s",s[i].name);
		printf("\nEnter id:");
		scanf("%ld",&s[i].id);
		printf("\nEnter dept:");
		scanf("%s",s[i].dept);
		printf("\nEnter class:");
		scanf("%d",&s[i].class);
		printf("\nEnter gpa:");
		scanf("%f",&s[i].gpa);
		printf("\n");

	}  
 	
}

int main(){  
   int size = 10;
   struct stu_info student[size];
   int i;   float avg=0;
   setInfo(student, size);
   
   for (i=0; i<size; i++)
      avg += student[i].gpa;
      
   printf("avg %f\n",avg/size);
   return 0;
}

