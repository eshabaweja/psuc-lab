/*Print the Fibonacci numbers that fall in given range.*/
#include<stdio.h>
int main()
{
	int t1=0,t2=1,num=0,i,j,x1,x2;

	printf("\nEnter range of terms: ");
	scanf("%d %d",&x1,&x2);

	printf("Required range of Fibonnaci series is: ");
	if (x1==1)
		{printf("%d  ",t1);
		x1=x1+1;}
			
	if (x1==2)
		printf("%d",t2);


	for (i=3; i<=x2; i++){
		num = t1 + t2;
			
		if (i>=x1 && i<=x2)	
		printf("  %d",num);

		t1 = t2;
		t2 = num;
		}
	
	printf("\n");

return 0;
}

