/*c program to count total digits in agiven number using loop*/
#include<stdio.h>
int main()
{
	long long int num;
	int count =0;
	printf("\n enter any number=");
	scanf("%d",&num);
	do
	{
		count++;
		num/=10;
	}
	while(num!=0);
	printf("\n digit count=%d",count);
	return 0;
}
