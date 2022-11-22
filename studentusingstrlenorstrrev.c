#include<stdio.h>
main()
{
	char name[5][10];
	int i,j;
	int len;
	printf("\n enter 5 student name=");
	for(i=0;i<=4;i++)
	{
		scanf("%s",name[i]);
	}
	printf("\n display student name");
	for(i=0;i<=4;i++)
	{
		printf("\n %s",name[i]);
	}
	//length of string
	printf("\n length of string ");
	for(i=0;i<=4;i++)
	{
		len=0;
		for(j=0;j<strlen(name[i]);j++)
		{
			len++;
		}
		printf("\n\n %s length=\t%d",name[i],len);
		//reverse of string
		printf("\n reverse of string");
		for(i=0;i<=4;i++)
		{
			for(j=strlen(name[i])-1;j>=0;j--)
			{
				printf("%c",name[i][j]);
			}
			printf("\n");
		}
	}
}
