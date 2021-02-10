/*Check whether given number is Armstrong or not. Sum of cube of digits should be equal to original number.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
        int temp = num, sum = 0;

        while (temp > 0)               
        {
            int x = temp % 10;
            temp = temp / 10;
            sum = sum + (pow(x,3));
        }
        
        if (num == sum)         //checking if the sum is equal to original number
            printf("\n%d is an Armstrong number.\n",num);
        else
            printf("\n%d is not an Armstrong number.\n",num);
            
    return 0;
}   
