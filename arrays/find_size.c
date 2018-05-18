 #include <stdio.h>
#include <stdlib.h>

int main(){
   int str_numbers[5] = {1,4,8,2,9};
    int total = sizeof(str_numbers)/sizeof(str_numbers[0]);
    printf ("%d\n", total);
    return 0;
}
