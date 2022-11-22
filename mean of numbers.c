#include<stdio.h>
main()
{
	int a[25],n,i;
	float mean=0,sum=0;
	printf("\n enter the numbers of trems=");
	scanf("%d",&n);
	printf("\n enter the numbers=");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
		mean=sum/n;
	}
	printf("\n mean of numbers are=%0.4f",mean);
	return 0;

}
//in output error
