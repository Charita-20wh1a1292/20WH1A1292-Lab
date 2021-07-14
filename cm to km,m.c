#include<stdio.h>
int main()
{
	int cm,m,km;
	printf("Enter length in cm's\n");
	scanf("%d",&cm);
	km=cm/1000;
	m=(cm-(km*1000))/100;
	printf(" km=%d\n m=%d",km,m);
	return 0;		
}
