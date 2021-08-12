#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="engineering";
	char ch;
	int i,freq=0;
	printf("enter the character : ");
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
		if(ch==str[i])
		freq++;
		i++;
	}
	printf("the frequency of %c element is %d",ch,freq);
}
