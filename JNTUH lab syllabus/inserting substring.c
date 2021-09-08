#include<stdio.h>
int main()
{
	char ini[30],sub[20];
	int pos,lenI,lenS,i;
	puts("enter a string");
	gets(ini);
	lenI=strlen(ini);
	puts("enter second string");
	gets(sub);
	lenS=strlen(sub);
	printf("enter the position where the sub string must be inserted\n");
	scanf("%d",&pos);
	for(i=pos;i<lenI;i++)
	{
		ini[i+lenS]=ini[i];
	}
	for(i=0;i<lenS;i++)
	{
		ini[pos+i]=sub[i];
	}
	sub[lenS+1]='\0';
	printf("after inserting the string is \n%s",ini);
	return 0;
	
	
}
