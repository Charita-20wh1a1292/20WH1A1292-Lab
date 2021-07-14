#include<stdio.h>
int main()
{
	int a,c,C;
	//without using built in function//
	printf("enter a number\n");
	scanf("%d",&a);
	c = a*a*a;
	//using built in function//
	C=(pow(a,3));
	printf("cube of the number = \n%d\n%d",c,C);
	return 0;
}
