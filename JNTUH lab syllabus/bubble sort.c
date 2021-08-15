#include<stdio.h>
int main()
{
	int a[10],i,n,j,temp;
	printf("Enter array length:\n ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
