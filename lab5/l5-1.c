/*Print number of vowels and consonants in string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	int cons=0, vow=0, i, length; 
	char str[100000];
	
	printf("Enter the string:");
	scanf("%s", str);
	
	length = strlen(str);

	for(i=0; i<length; i++)
	{
		if(str[i]=='a'||str[i] == 'e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vow = vow+1;
	     
	    else if(str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z'||str[i]=='B'||str[i]=='C'||str[i]=='D'||str[i]=='G'||str[i]=='F'||str[i]=='H'||str[i]=='J'||str[i]=='K'||str[i]=='L'||str[i]=='M'||str[i]=='N'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'||str[i]=='T'||str[i]=='V'||str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]== 'Z')
			cons=cons+1;
	     	
		else
			continue;
	}
	
	printf("\nThe number of vowels is: %d\n",vow);
	printf("\nThe number of consonants is: %d\n",cons);
	
return 0;
}
