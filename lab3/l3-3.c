/*3.Write a program to print the nth Fibonacci number.Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)*/
#include<stdio.h>
int main()
{
	int t1,t2,num,n,i;

	printf("\nEnter number of terms: ");
	scanf("%d",&n);

	t1=0;	//first term of Fibonacci series
	t2=1;	//second term of Fibonacci series 
	num=0;
	
	
	for (i=3;i<=n;i++){
		num = t1 + t2;
		t1 = t2;
		t2 = num;
	}
	
	printf("\nRequired Fibonacci number is %d.\n",num);

return 0;
}

