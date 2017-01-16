#include <stdio.h>
int main()
{
    int i = 200, *p, *q,*r;
    p = &i;  q = r = p;
    *q = *q + 1;
    printf("*p = %d\n", *p); 
    printf(" *q= %d and *r = %d\n",*q,*r);
    return 0;
}
