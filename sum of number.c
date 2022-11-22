#include<stdio.h>
int main()
{
	int n,sum=0,c,value;
	printf("\n enter your choice of number to add=");
	scanf("%d",&n);
	printf("\n enter %d number\n",n);
	for(c=1;c<=n;c++)
	{
		scanf("%d",&value);
		sum=sum+value;
	}
	printf("sum of numbers=%d\n",sum);
	return 0;

}
