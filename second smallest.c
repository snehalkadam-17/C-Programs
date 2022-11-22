#include<stdio.h>

int main()
{
	int n,r,INT_MAX,sec_smallest,smallest;
	printf("\n enter the number=");
	scanf("%d",&n);
	smallest=INT_MAX;
	sec_smallest=INT_MAX;
	while(n>0)
	{
		r=n%10;
		if(smallest>=r)
		{
			sec_smallest=smallest;
			smallest=r;
		}
		
		else if(r<=sec_smallest)
		sec_smallest=r;
		n=n/10;
	}
	printf("\n the second smallest digit is =%d",sec_smallest);
	return 0;
}
