#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter string 1:\n");
	scanf("%s",s1);
	printf("Enter string 2:\n");
	scanf("%s",s2);
	printf("Length of string 1:%d\n",strlen(s1));
	printf("Length of string 2:%d\n",strlen(s2));
	if (strcmp(s1,s2)==0)
	printf("Strings are equal\n");
	else
	printf("String are not equal\n");	
	printf("Concatenation of two strings is:%s\n",strcat(s1,s2));
	printf("Resultant string after copying strings:%s\n",strcpy(s1,s2));
	
}
