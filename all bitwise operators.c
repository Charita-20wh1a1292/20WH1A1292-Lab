#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("a&b = %d\n",a&b);
	printf("a|b = %d\n",a|b);
	printf("a^b = %d\n",a^b);
	printf("~a,~b = %d,%d\n",~a,~b);
	return 0;
}