#include<stdio.h>
int main()
{
	int n1,n2,max;
	printf("enter 2 numbers\n");
	scanf("%d%d",&n1,&n2);
	max = (n1>n2) ? n1 : n2;
	printf("maximum of two numbers = %d",max);
	return 0;
}
