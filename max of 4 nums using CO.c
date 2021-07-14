#include<stdio.h>
int main()
{
	int a,b,c,d,max1,max2,max;
	printf("enter 4 numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max1=(a>b)?a:b;
	max2=(c>d)?c:d;
	max=(max1>max2)?max1:max2;
	printf("the largest of 4 numbers = %d\n",max);
	return 0;
}
