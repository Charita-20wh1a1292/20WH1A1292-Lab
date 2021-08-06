#include<stdio.h>
int main()
{
	int a;
	signed short int b;
	unsigned short int c;
	long int d;
	long long int e;
	char f;
	float g;
	double h;
	long double i;
	printf("enter integer value\n");
	scanf("%d",&a);
	printf("enter signed short int value\n");
	scanf("%hi",&b);
	printf("enter unsigned short int value\n");
	scanf("%hu",&c);
	printf("enter long int value\n");
	scanf("%l",&d);
	printf("enter long long int value\n");
	scanf("%lli",&e);
	printf("enter a character\n");
	scanf("%c",&f);
	printf("enter float value\n");
	scanf("%f",&g);
	printf("enter double value\n");
	scanf("%lf",&h);
	printf("enter long double value\n");
	scanf("%Lf",&i);
	return 0;	
}
