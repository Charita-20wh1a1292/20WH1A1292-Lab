#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	int *p,*q;
	printf("Enter 1st matrix elements:\n");
	p=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",p);
			p++;
		}
	}
	printf("Enter 2nd matrix elements:\n");
	q=b;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",q);
			q++;
		}
	}
	p=a;
	q=b;
	printf("Addition of matrices is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*p+*q);
			p++;
			q++;
		}
		printf("\n");
	}
}
