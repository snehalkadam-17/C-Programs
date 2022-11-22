//imp//
#include<stdio.h>
main()
{
	int number[30];
	int i,j,a,n;
	printf("\n enter the value of n");
	scanf("%d",&n);
	printf("\n enter the numbers");
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]<number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("\n the number arranged in decending order");
	for(i=0;i<n;i++)
	{
		printf("%d\n",number[i]);
	}
	
}
