#include<stdio.h>
main()
{
	int n,reminder;
	printf("\n enter the number=");
	scanf("%d",&n);
	int smallest=n%10;
	while(n>0)
	{
		reminder=n%10;
		if(smallest>reminder);
		{
			smallest=reminder;
		}
		n=n/10;
	}
	printf("\n the smallest digit is=%d\n",smallest);
	return 0;
}
