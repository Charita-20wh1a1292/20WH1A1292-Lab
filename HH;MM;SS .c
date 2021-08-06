#include<stdio.h>
int main()
{
	int x,hours,min,sec;
	printf("Enter input\n");
	scanf("%d",&x);
	hours=x/3600;
	min=(x-(3600*hours))/60;
	sec=(x-(3600*hours)-(min*60));
	printf("%d:%d:%d\n",hours,min,sec);
	return 0;
}
