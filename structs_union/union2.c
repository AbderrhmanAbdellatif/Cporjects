#include <stdio.h>

union paylas{
       int x;
       int y;
}z;
main()
{
	int *X,*Y;
	z.x = 10;
	X = &z.x;
	printf("\nTamsayý(x) : %d - bellek adresi %X",z.x,X);
	z.y = 20;
	Y = &z.y;
	printf("\nTamsayý(y) : %d - bellek adresi %X",z.y,Y);
}

