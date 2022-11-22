#include<stdio.h>
int reversedigits(int n)
{
	int rev_n=0,r;
	while(n>0)
	{
		rev_n=rev_n *10+r;
		n=n/10;
	}
	return rev_n;
}int main()
{
//	int n=4562;
	printf("\n reverse of no is %d",reversedigits);
	getchar();
	return 0;
	
}
