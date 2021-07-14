#include<stdio.h>
int main()
{
	int a;
	printf("enter a ASCII value\n");
	scanf("%d",&a);
	((a>=97&&a<=122)||(a>=65&&a<=90))?printf("a is alphabet"):printf("a is not an alphabet");
	return 0;
}
