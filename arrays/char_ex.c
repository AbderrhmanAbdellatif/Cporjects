  #include <stdio.h>
#include <stdlib.h>

int main( ) {
               int n, c;
               char line[100];
               n = 0;
               while( (c=getchar( )) != '\n' ) {
                    if( n < 100 )
                       line[n] = c;
                    n++;
               }
               printf("length = %d\n", n);
               return 0;
       }

