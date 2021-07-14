#include<stdio.h>
int main()
{
	int a=200;
	printf("even numbers between 200 and 300 are:\n");
	do
	 {
		printf("%d\n",a);
		a=a+2;
	 }
	while(a<=300);
	return 0;
}
