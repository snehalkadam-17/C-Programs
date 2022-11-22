#include<stdio.h>
int main()
{
	int a,n,r;
	float tn,sum=0;
	printf("\n enter first number of an g.p series=");
	scanf("%d",&a);
	printf("\n enter the total number=");
	scanf("%d",&n);
	printf("\n enter the common ratio=");
	scanf("%d",&r);
	sum=(a*(1-pow(r,n)))/(1-r);
	tn=a*(pow(r,n-1));
	printf("\n the sum of geomatric progession series=%f",sum);
	printf("\n the tn term of geomatric progession series=%f\n",tn);
	return 0;
	
}
