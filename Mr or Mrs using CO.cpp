#include<stdio.h>
int main()
{
	char name[15];
	char gender;
	printf("Enter name \n");
	gets(name);
	printf("Enter gender:");
	scanf("%c",&gender);
	(gender=='M'||gender=='m')?printf("Mr.%s",name):printf("Mrs.%s",name);
	return 0;
}
