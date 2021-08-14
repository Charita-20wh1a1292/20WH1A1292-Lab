#include<stdio.h>
int main()
{
	int a[10],i,sum=0,n;
	int *p;
	printf("Enter array length:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	p=a;
	for(i=0;i<n;i++,p++)
	{
		scanf("%d",p);
	}
	p=a;
	for(i=0;i<n;i++,p++)
	{
		sum=sum+*p;
	}
	printf("Sum of array elements=%d",sum);
	
}
