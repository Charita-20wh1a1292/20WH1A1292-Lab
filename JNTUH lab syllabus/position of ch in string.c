#include<stdio.h>
int main()
{
	char S[50],ch[10],*found;
	printf("enter a string\n");
	scanf("%s",S);
	printf("enter charcter to be found\n");
	scanf("%s",ch);
	found=strstr(S,ch);
	if (found)
	{
		printf("ch is found in the string at %d\n%",found-S);
	}
	else
	{
		printf("-1");
	}
	return 0;
}
