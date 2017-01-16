#include <stdio.h>

int main()
{
	int i;
	int fibs[40];
	fibs[0]=1;
	fibs[1]=1;
	for (i=2;i<40;i++){
		fibs[i]= fibs [i-1]+fibs[i-2];
		
	}
	for (i=0;i<40;i++)
		printf(" %d \n",fibs[i]);
	
	return 0;
}
