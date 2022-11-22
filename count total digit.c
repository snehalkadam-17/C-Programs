#include<stdio.h>
main()
{
	long long int n;
	int count =0;
	printf("\n enter number=");
	scanf("%d",&n);
	do
	{
		count++;
		n/=10;
	}
	while(n!=0);
	printf("\n digit count=%d",count);
	return 0;
}
