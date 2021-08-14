#include<stdio.h>
int main()
{
	int a[5][5],i,j,m,n;
	//m*n matrix
	int *p;
	printf("Enter no.of rows:\n");
	scanf("%d",&m);
	printf("Enter no.of columns:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	p=a;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",p);
			p++;
		}
	}
	printf("Matrix is:\n");
	p=a;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*p);
			p++;
		}
		printf("\n");
	}
}
