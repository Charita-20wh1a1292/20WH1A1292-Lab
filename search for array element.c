#include<stdio.h>
int main()
{
	int i,n,a[100],x,flag=0;
	printf("enter no of elements of an array\n");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to search\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if (x == a[i])
		{
		  flag = 1;	
		}
	}
		if(flag==1)
		printf("the element is found\n");
		
		else
		printf("the element is not found");
	
	
		return 0;
	
}
