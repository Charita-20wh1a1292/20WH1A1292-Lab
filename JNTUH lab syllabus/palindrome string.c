#include<stdio.h>
int main()
{
	char string[20];
	int i,len,flag=0;
	printf("enter a string\n");
	scanf("%s",string);
	len=strlen(string);
	for(i=0;i<len/2;i++)
	if(string[i]==string[len-i-1])
	{
		flag++;
		
	}
	if(flag==i)
	{
		printf("%s is a palindrome string",string);
	}
	else
	{
		printf("%s is not a palindrome string",string);
	}
	return 0;
}
