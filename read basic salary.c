#include<stdio.h>
int main()
{                                           
	int BS; //basic salary
	float HRA; //house rent allowance
	float DA; //dearness allowance
	float net_salary;
	printf("enter basic salary\n");
	scanf("%d",&BS);
	HRA = BS * (20/100.0);
	DA = BS * (40/100.0);
	net_salary = BS + HRA +DA;
	printf("net salary = %f\n",net_salary);
	return 0;
	
}
