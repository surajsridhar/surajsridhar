#include<stdio.h>
#include<string.h>
#include"hw1.h"


int main()
{
	char str1[]= "This is a string";
    char str2[]= "some NUMmbers12345";
    char str3[]= "Does it reverse \n\0\t correctly?";
    printf("\n %s \n %s \n %s \n",str1,str2,str3);
	
    reverse_string(str1,strlen(str1));
    reverse_string(str2,strlen(str2));
    reverse_string(str3,strlen(str3));
    printf("\n After reversal \n %s \n %s \n %s \n",str1,str2,str3);
  return 0;    
	
}