#include<stdio.h>
#include<string.h>
void sort(int arr[],int n)
{
	int i,j,temp;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[]={60,20,30,40,50};
	int i,n;
	n=sizeof(arr)/sizeof(int);
	sort(arr,n);
	printf("the minimum and max element are %d  %d",arr[0],arr[n-1]);
}
