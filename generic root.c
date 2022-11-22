#include<stdio.h>
/*if user input number is 12345,then we add all the individual digits of the number i.e.,
1+2+3+4+5=15.we got 15.now we add individual digits of number 15i.e,1+5=6.so th generic root of number 12345 is 6*/
int main()
{
	int n,temp,r,sum=0;
	printf("\n enter a number=");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		sum=sum+r;
		temp=temp/10;
		if(temp==0)
		{
			if(sum>9)
			{
			temp=sum;
			sum=0;
		    }
		}
	}
	printf(" generic root of %d is %d\n",n,sum);
	return 0;
}
