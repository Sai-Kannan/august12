#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter any string : \n ");
    gets(str);
	while(str[i]!='\0')
	{
		if(isdigit(str[i]))
		{
	    	break;
		}
		i++;
	}
	printf("first occurance of digit is at %d ",i+1);
}
