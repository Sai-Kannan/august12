#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i;
	printf("enter the two strings : \n");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	puts(str1);
	printf("length is %d ",strlen(str1));
	
}
