#include<stdio.h>
int main()
{
	int a[10],i,n;
	int *p;
	printf("Enter array length:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=a;
	printf("Array elements are:\n");
	for(i=0;i<n;i++,p++)
	{
		printf("%d\n",*p);
		
	}
	
}
