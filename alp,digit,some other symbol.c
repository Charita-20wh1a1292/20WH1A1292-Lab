#include<stdio.h>
int main()
{
	int a;
	printf("Enter a ASCII value\n");
	scanf("%d",&a);
	if ((a>=97&&a<=122)||(a>=65&&a<=90))
	printf("it is an alphabet");
    else if (a>=48&&a<=57)
	printf("it is a digit");
	else
	printf("it is some other symbol");
	return 0;
}
