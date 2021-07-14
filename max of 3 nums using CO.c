#include<stdio.h>
int main()
{
	int a,b,c,max1,max;
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	max1 = (a>b)?a:b;
	max = (c>max1)?c:max1;
	printf("maximum of 3 numbers = %d\n",max);
	return 0;
}
