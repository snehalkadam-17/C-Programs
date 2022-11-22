#include<stdio.h>
main()
{
	int n,sum=0,fd,ld;
	printf("\n enter number=");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	printf("\n fd=%d and ld=%d\n\n",fd,ld);
	return 0;
}
