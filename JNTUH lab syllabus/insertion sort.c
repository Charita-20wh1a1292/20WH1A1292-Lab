#include<stdio.h>
int main()
{
	int a[10],i,n,j,temp,k;
	printf("Enter array length:\n ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
