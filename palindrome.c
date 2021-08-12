#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter any string : \n");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str1,str2)==0)
	printf("it is palindrome");
	else
	printf("not palindrome"); 
}
