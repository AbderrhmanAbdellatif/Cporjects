
#include <stdio.h>
int f(int n)
{
    printf("Deger %d\n", n);
    return n*n;
}
int g(int n)
{
    printf("Deger %d\n", n);
    return n*n*n;
}

int main()
{
    int (*p)(int) = f;
    int x = p(2);
    printf("f(2) %d\n",x);
    p=g;
    
    x = p(2);
    printf("g(2) %d",x);
    
}

