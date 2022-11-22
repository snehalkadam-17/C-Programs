#include<stdio.h>
int getdigit(int num , int n)
{
	int r;
	r=num/pow(10,n);
	r=r%10;
	return r;	
}
void main()
{
	int num=0,pos;
	printf("\n enter num");
	scanf("%d",&num);
	printf("\n enter position:");
	scanf("%d",&pos);
	printf("%dth digit of %d is %d\n",pos,num,getdigit(num,pos));
}
