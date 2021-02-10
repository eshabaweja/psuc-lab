/*Print the prime numbers that fall in given range.*/

#include <stdio.h>
 
int main()
{
    int a, b, i, j, flag;
 
    printf("Enter range: ");
    scanf("%d %d", &a, &b);

    printf("\nPrime numbers between %d and %d are: ", a, b);

    for (i = a; i <= b; i++)
    {
        /* Skip 0 and 1 as they areniether prime nor composite*/
        if (i == 1 || i == 0)
            continue;
 
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }
 
        /*flag = 1 means i is prime and flag = 0 means i is not prime*/
        if (flag == 1)
            printf("%d ", i);
    }
 
    return 0;
}

