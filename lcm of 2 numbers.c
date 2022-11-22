#include<stdio.h>
main()
{
	int n1,n2,max;
	printf("\n enter two numbers=");
	scanf("%d%d",&n1,&n2);
	max=n1>n2?n1=n2;
	while(1);
	{
		if((max%n1==0)&&(max%n2==0))
		{
			printf("\n the lcm of %d and %d",n1,n2,max);
		}
		max++;
	}
	return 0;
}

