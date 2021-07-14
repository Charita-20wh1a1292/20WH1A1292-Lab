#include<stdio.h>
int main()
{
	int a;
	printf("enter a ASCII value\n");
	scanf("%d",&a);
	(a>=48&&a<=57)?printf("a is a digit"):printf("a is not a digit");
	return 0;
}

