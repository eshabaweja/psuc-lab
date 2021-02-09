/*Write a program to calculate a bill of internet browsing.
The conditions are given below:
Minimum Rs. 200 for up to 100 calls
Plus,Rs. 0.60 per call for next 50 calls.
Plus,Rs. 0.50 per call for next 50 calls.
Plus,Rs. 0.40 per call for any call beyond 200 calls*/

#include <stdio.h>

int main()
{ 
    int calls;
    float bill;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);
    
    int choice;
    
    if(calls<=100 && calls>=0)
    choice=1;
    
    else if(calls>100 && calls<=150)
    choice=2;
    
    else if(calls>150 && calls<=200)
    choice=3;
    
    else if(calls>200)
    choice=4;
    
    switch(choice)
    {
        case 1:   {bill= 200;
                  printf("The bill is %.2f\n", bill);
                  break;}
                  
        case 2:   {bill= 200+.60*(calls-100);
                  printf("The bill is %.2f\n", bill);
                  break;}
                  
        case 3:   {bill= 200+.60*(50)+ .50*(calls-150);
                  printf("The bill is %.2f\n", bill);
                  break;}
                  
        case 4:   {bill= 200+.60*(50)+ .50*(50)+ .40*(calls-200);
                  printf("The bill is %.2f\n", bill);
                  break;}
                  
        default:
                  printf("Invalid Input.\n");
    }
    
return 0;
}    
