#include<stdio.h>
struct student
{
	char name[25];
	int rollno;
	int marks[3];
};
int main()
{ struct student s[10];
int i,j,n;
printf("enter no of students :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter details of students %d :",i+1);
	scanf("%s%d",&s[i].name,&s[i].rollno);
	printf("enter 3 subject marks :");
	for(j=0;j<3;j++)
	scanf("%d",&s[i].marks[j]);	
}
printf("the student details are :\n");
printf("---------------------------------");
printf("name     rollno    m1    m2    m3");
for(i=0;i<n;i++)
{
	printf("%s%8d",s[i].name,s[i].rollno);
	for(j=0;j<3;j++)
	printf("%8d",s[i].marks[j]);
}
return 0;
}
