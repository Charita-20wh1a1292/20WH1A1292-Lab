#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number\n");
	scanf("%d",&a);
	b = (a/100);
	printf("number excluding its last two digits=%d",b);
	return 0;
}
