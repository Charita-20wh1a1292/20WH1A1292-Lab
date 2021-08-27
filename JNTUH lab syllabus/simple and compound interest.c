#include<stdio.h>
#include<math.h>
int main()
{
	int p,amount;
	float r,t,CI,SI;
	printf("enter principle,time and rate of interest\n");
	scanf("%d%f%f",&p,&t,&r);
	SI=p*t*r/100;
	printf("simple interest = %.3f",SI);
	amount=p*pow(1+(r/100),t);
	CI = amount-p;
	printf("\ncompound interest = %.3f",CI);
	
}
