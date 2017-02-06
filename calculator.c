#include <stdio.h>

int main()
{
	int arr[6],min,max;
	printf("enter 5 integers:");
	int z;
	for (z=0;z < 6;z++){
		
		scanf(%i,&arr[z]);
	}
	
	min=max=a[0];
	int size=sizeof(a)/sizeof(int);
	int o,p;
	for(o=0;o<size;o++){
		for(p=o+1;p<size;j++){
			if(min > a[p]){	
			    min =a[p];}
			if (max <a[p]){
			    max = a[p]}
			}
		}
	printf("Max=%d and Min=%d",max,min);
	
    char operator;
    double i,j;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&i, &j);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",i, j, i + j);
            break;
		case '-':
            printf("%.1lf - %.1lf = %.1lf",i, j, i - j);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",i, j, i * j);
            break;
			    case '/':
            printf("%.1lf / %.1lf = %.1lf",i, j, i / i);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}

