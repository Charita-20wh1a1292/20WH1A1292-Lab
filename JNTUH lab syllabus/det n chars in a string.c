#include<stdio.h>
int main()
{
	char str[20];
	int pos,num,len,i;
	puts("enter a string");
	gets(str);
	printf("enter the position where the characters must be removed\n");
	scanf("%d",&pos);
	printf("no of characters that must be removed\n");
	scanf("%d",&num);
	len = strlen(str);
	for(i=pos+num;i<len;i++)
	{
		str[i-num]=str[i];
	}
	str[i-num]='\0';
	printf("the new string is %s\n",str);
	return 0;
}
