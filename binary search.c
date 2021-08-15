#include<stdio.h>
int main()
{
	int a[10],n,i,low,high,mid,key,flag=0;
	printf("Enter array length:\n ");
	scanf("%d",&n);
	printf("Enter array elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be found:\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(flag==1)
	printf("Elements is found\n");
	else
	printf("Element not found");
}
