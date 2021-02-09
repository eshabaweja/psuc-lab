/*Write  a  program  to  take  two  numbers  as  an  input  and  find  whether  one  number  is multiple of other or not. */

#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%d",&b);
	
	if(a%b ==0)
	printf("%d is a multiple of %d\n",a,b);
	
	else if(b%a ==0)
	printf("%d is a multiple of %d\n",b,a);
	
	else
	printf("Neither is a multiple of the other.\n");
return 0;
}
