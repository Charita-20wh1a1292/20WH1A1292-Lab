#include<stdio.h>
struct details
{
    char name[10];
	int age;
	char gender;
	float salary;
}s;
int main()
{
	printf("%d",sizeof(struct details));
}
