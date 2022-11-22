#include<stdio.h>
int main()
{
	int n,r;
	printf("\n enter the number=");
	scanf("%d",&n);
	int smallest=n%10;
	while(n>0)
	{
		r=n%10;
		if(smallest>r)
		{
			smallest=r;
		}
		n=n/10;
	}
	printf("\n the smallest digit is=%d\n",smallest);
	return 0;
}
