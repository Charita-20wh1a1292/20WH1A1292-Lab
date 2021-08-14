#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
	int marks;
};
int main()
{
	struct student std;
	struct student *ptr;
	ptr=&std;
	printf("Enter name of the student:\n");
	scanf("%s",ptr->name);
	printf("Enter RollNo:\n");
	scanf("%d",&ptr->rollno);
	printf("Enter marks:\n");
	scanf("%d",&ptr->marks);
	printf("STUDENT DETAILS:\n");
	printf("NAME:%s\n",ptr->name);
	printf("ROLL NUMBER:%d\n",ptr->rollno);
	printf("marks=%d\n",ptr->marks);
	
}
