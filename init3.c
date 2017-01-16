#include <stdio.h>

int main()
{
	int i;
	int arr[10];
	
	for (i=0;i<10;i=i+2)
	{	arr[i]=0;
		arr[i+1]=1;
	}
	for (i=0;i<10;i++)
		printf(" arr[%d] = %d \n",i,arr[i]);
	
	
	return 0;
	
	
}

