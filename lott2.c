#include <stdio.h>

int main()
{
	int i;
	int j, k;
	int lottery[] = {23,16,18,19,26,13,22,    /*  1 ..  7 */
                    20,14,22,18,21,15,17,    /*  8 .. 14 */
                    24,15,18,20,13,14,20,    /* 15 .. 21 */
                    18,22,20,16,19,11,20,    /* 22 .. 28 */
                    16,28,22,20,15,17,17,    /* 29 .. 35 */
                    21,21,19,20,14,22,25,    /* 36 .. 42 */
                    19,17,26,18,20,23,12 };  /* 43 .. 49 */
                    for (i=0;i<49;i++){
                    	    if(i == 0){
                    	    	printf(" \t \t ");
                    	    	for (j=0;j<lottery[0];j++) 
                    	    		printf("_");
                    	    	printf("\n");	    
                    	    }
                    	    printf("%d\t(%d)\t|",i+1,lottery[i]);
                    	    for (j=0;j<lottery[i];j++) printf("_");
                    	    printf("|");
                    	    if (i < 48){
                    	    	if (lottery[i] < lottery[i+1]){
                    	    	    	for (k=0; k< lottery[i+1] - lottery[i] - 1;k++) 
                    	    	    		printf("_");
                    	    	}
                    	    }
                    	    printf("\n");
                    }

	
	
	return 0;
	
	
}

