#include<stdio.h>
main()
{
	int n,reminder,largest=0;
	printf("\n enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		reminder=n%10;
		if(largest<reminder)
		{
			largest=reminder;
		}
		n=n/10;
	}
	printf("\n the largest digit is : %d\n",largest);
	return 0;
}
