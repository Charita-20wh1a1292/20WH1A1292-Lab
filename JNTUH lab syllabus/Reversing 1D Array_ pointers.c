#include<stdio.h>
int main()
{
	int a[10],n,i;
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
	printf("Array elements in Reverse Order:\n");
	p=&a[n-1];
	for(i=0;i<n;i++,p--)
	{
		printf("%d\n",*p);
	}
}
