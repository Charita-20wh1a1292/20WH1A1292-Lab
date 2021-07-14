#include<stdio.h>
int main()
{
	int a ;
	printf("enter any ASCII value\n");
	scanf("%d",&a);
	if((a>=97&&a<=122)||(a>=65&&a<=90))
	printf("the given character is alphabet");
	return 0;
	
}
