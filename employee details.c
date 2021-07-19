#include<stdio.h>
struct employee
{
	char name[25];
	float salary;
	int ID;	
}e;
int main()
{
	printf("enter name:");
	gets(e.name);
	printf("enter employee id no:");
	scanf("%d",&e.ID);
	printf("enter salary:");
	scanf("%f",&e.salary);
	printf("employee name : %s\n ID no : %d\n salary : %f",e.name,e.ID,e.salary);
}
