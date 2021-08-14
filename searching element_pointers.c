#include<stdio.h>
int main()
{
	int a[10],i,key,n,flag=0;
	int *p;
	printf("Enter array lenth:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	printf("Enter the element to be found:\n");
	scanf("%d",&key);
	p=a;
	for(i=0;i<n;i++)
	{
		if(*p==key)
		flag=1;
		p++;
	}
	if(flag==1)
	printf("Element is found");
	else
	printf("Element is not found");	
}
