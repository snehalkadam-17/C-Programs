#include<stdio.h>
int main()
{
	int n;
	printf("\n enter any number=");
	scanf("%d",&n);
	if((n%2==0)&&(n%3==0)&&(n%5==0)&&(n%9==0))
	{
		printf("\n number is divisible by 2,3,5,9");
	}
	else
	{
		printf("\n number is not divisible by 2,3,5,9");
	}
}
