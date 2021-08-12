#include<stdio.h>
#include<string.h>
int e_delete(int arr[],int n)
{
	int brr[100],m;
	printf("where do u want to delete  :");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(i>=m)
		  brr[i]=arr[i+1];//3//2
		else
          brr[i]=arr[i];//2 2 
    }
    for( int i=0;i<n-1;i++)
	printf("%d\n",brr[i]);
    
	
}
int insert(int arr[],int n)
{
	int brr[100],m,a;
	printf("where do u want to insert and what do you want to insert :");
	scanf("%d%d",&m,&a);
	for(int i=0;i<=n;i++)
	{
		if(i==m)
		  brr[i]=a;//3
		else if(i>m)
		  brr[i]=arr[i-1];//2
		else
          brr[i]=arr[i];//2 2 
    }
    for( int i=0;i<=n;i++)
	printf("%d\n",brr[i]);
    
}

int main()
{
	int i, arr[100],n;
	printf("enter the no.of elements : \n");
	scanf("%d",&n);
	printf("array  elements are : ");
	for( i=0;i<n;i++)
	scanf("%d",&arr[i]);
	char ch;
	printf("press i for insert \n press d for delete : ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'i': insert(arr,n);break;
		case'd' : e_delete(arr,n);break;
		default : printf("enter only given characters\n");
	}
} 
