/*Program to create a simple calculator*/
#include <stdio.h>

int main() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    switch(operator)
    {
        case '+':
           {	printf("Enter two operands: ");
    		scanf("%lf %lf",&n1, &n2);
    		printf("%lf + %lf = %lf\n",n1, n2, n1+n2);
           	break;
           }

        case '-':
 	   {	printf("Enter two operands: ");
    		scanf("%lf %lf",&n1, &n2);
    		printf("%lf - %lf = %lf\n",n1, n2, n1-n2);
           	break;
           }

        case '*':
           {	printf("Enter two operands: ");
    		scanf("%lf %lf",&n1, &n2);
    		printf("%lf * %lf = %lf\n",n1, n2, n1*n2);
           	break;
           }

        case '/':
           {	printf("Enter two operands: ");
    		scanf("%lf %lf",&n1, &n2);
    		printf("%lf / %lf = %lf\n",n1, n2, n1/n2);
           	break;
           }


        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Operation unavailable.\n");
    }

    return 0;
}
