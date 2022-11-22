#include<stdio.h>
main()
{
	int n,r,largest=0,sec_largest=0;
	printf("\n enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(largest<r)
		{
			sec_largest=largest;
			largest=r;
		}
		else(r >= sec_largest);
		sec_largest=r;
		n=n/10;
	}
	printf("\n the largest digit is %d",sec_largest);
	return 0;
	
}
