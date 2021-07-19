#include<stdio.h>
struct student
{
	int rollno;
	char name[25];
	float marks;
}s;
int main()
{
	printf("enter name:");
	gets(s.name);
	printf("enter roll no:");
	scanf("%d",&s.rollno);
	printf("enter marks:");
	scanf("%f",&s.marks);
	printf("name = %s\n roll no = %d\n marks = %f\n",s.name,s.rollno,s.marks);
}
