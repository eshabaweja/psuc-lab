/*Program that returns a letter grade based on a quiz score*/
#include<stdio.h>
int main()
{
    int score;

    printf("Enter the quiz score on a scale of 0 to 10:");
    scanf("%d",&score);
    
    if (score==9 || score==10)
    printf("\nGrade: A\n");
    
    else if (score==7 || score==8)
    printf("\nGrade: B\n");
    
    else if (score==5 || score==6)
    printf("\nGrade: C\n");
    
    else if (score==3 || score==4)
    printf("\nGrade: D\n");
    
    else if (score>=0 && score<3)
    printf("\nGrade: F\n");
    
    else
    printf("\nInvalid score.\n");
    

return 0;
}
