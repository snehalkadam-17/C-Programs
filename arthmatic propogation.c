#include<stdio.h>
int main()
{
	int a,n,diff,tn,i;
	int sum=0;
	printf("\n enter 1st no of series=");
	scanf("%d",&a);
	printf("\n enter total no in series=");
	scanf("%d",n);
	printf("\n enter common difference=");
	scanf("%d",&diff);
	sum=(n * (2*a+(n-1)*diff))/2;
	tn=a+(n-1)*diff;
	printf("\n sum of a.p series is=");
	for(i=a;i<=tn;i=i+diff)
	{
		if(i!=tn)
		
			printf("%d+ ",i);
		
		else
		
			printf("%d=%d",i,sum);
		
	}
	printf("\n");
	return 0;
}

