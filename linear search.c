#include<stdio.h>
int main()
{
	int a[10],i,n,key,flag=0;
	printf("Enter array length:\n ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be found:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		flag=1;
	}
	if(flag==1)
	printf("Elements is found\n");
	else
	printf("Element not found");
}
