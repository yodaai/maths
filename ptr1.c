#include <stdio.h>

int main()
{
    int i   = 100;
    int *p  = &i;
    int *q = &i;
    *p = 200; 
    *q = 2 * *q;
    printf("i = %d\n", i);  
    return 0;
}
