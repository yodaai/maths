#include<stdio.h>

int main()

{
    int i, j;
    int * p, * q;
    int ** x;
    int ***z;
    i = 100;
    j = 200;
    p = &i;
    q = &j;
    x = &p;
    z = &x;
    *p = *p + *q; //*p =300=i
    *q = **x / 2; // *q =150=j
    **x = *p + j; // **x= 450=i
    ***z = **x + *p + j;
    printf(" i = %d\n",   i);
    printf("&i = %p\n",  &i);
    printf(" j = %d\n",   j);
    printf("&j = %p\n",  &j);
    
    printf(" p = %p\n",   p);
    printf("&p = %p\n",  &p);
    printf("*p = %d\n",  *p);
    printf(" q = %p\n",   q);
    printf("&q = %p\n",  &q);
    printf("*q = %d\n",  *q);
    
    printf(" x = %p\n",   x);
    printf("&x = %p\n",  &x);
    printf("*x = %p\n",  *x);
    printf("**x= %d\n", **x);

    printf(" i = %d\n",   i);
    return 0;
}
    
