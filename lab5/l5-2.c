/*Change all uppercase letters into lowercase in a sentence.*/
#include<stdio.h> 
#include<string.h> 
  
int main() 
{ 
    char str[100000],str_up[100000];
	
    printf("Enter the string:");
    scanf("%s", str);
    
    int i =0;
    
    while (i <= strlen(str))
    {
     str_up[i] = toupper(str[i]);    //converting the given string into uppercase. 
     i++;
    }
    printf("%s\n",str_up); 
    return  0; 
} 
