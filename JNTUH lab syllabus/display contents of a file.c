#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("sample.txt","w");
	if(fp==NULL)
	{
		printf("unable to open file\n");	
	}
	else
	{
		printf("file opened successfully\n");
		printf("input data\n");
		while((ch=getchar())!=EOF)
		{
			putc(ch,fp);
			}
		fclose(fp);	
		fp=fopen("sample.txt","r");
		while(1)
		{
			ch=getc(fp);
			if(feof(fp))
			break;
			printf("%c",ch);
				}
		fclose(fp);				
	}
	
	
}
