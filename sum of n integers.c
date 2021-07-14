#include<stdio.h>
int main()
{
	int n,sum;
	printf("find sum of  first n integers\n");
	scanf("%d",&n);
	sum = (n*(n+1))/2;
	printf("sum of first %d integers = %d",n,sum);
	return 0;
}
