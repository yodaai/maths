#include <stdio.h>

int main()
{
	
	//This is the line causing issue in the conflict branch
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

