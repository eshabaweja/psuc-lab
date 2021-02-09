/*Write a program to check whether given character is vowel, consonant or digit.*/
#include<stdio.h>
int main()
{
     char a;
     printf("Enter the character:");
     scanf("%c", &a);

     if(a=='a'||a == 'e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
     	printf("%c is a vowel\n",a);
     
     else if(a >= '0' && a<= '9')
     	printf("%c is a digit\n",a);
     
     else if(a=='b'||a == 'c'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a == 'p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a == 'z'||a=='B'||a == 'C'||a=='D'||a=='G'||a=='F'||a=='H'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a == 'P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='V'||a=='W'||a=='X'||a=='Y'||a == 'Z')
     	printf("%c is a consonant\n",a);
     	
     else
     	printf("Neither a letter nor a digit.\n");
  
return 0;
}
