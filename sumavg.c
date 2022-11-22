#include<stdio.h>
main()
{
	int marks[5],i,sum=0,avg;
	printf("\n enter 5 subjects marks");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[1]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\n sum=%d",sum);
	printf("\n avg=%d",avg);
}
