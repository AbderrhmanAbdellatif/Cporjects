#include <stdio.h>

struct A_type {
   int m, n;
} k;

void func1(struct A_type r)
{  
   struct A_type s;
   s=r;
   s.m++;
}

void func2(struct A_type *p)
{  (*p).m=10;     
   p->n=3;
}

void func3(struct A_type r)
{  
   r.m++; 
   r.n = 3;
}

int main()
{  
   struct A_type k={1,2};
   func1(k);
   printf("%d  %d\n", k.m, k.n);
   
   func3(k);
   printf("%d  %d\n", k.m, k.n);
   
   func2(&k);
   printf("%d  %d\n", k.m, k.n);
   

}


