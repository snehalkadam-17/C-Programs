#include<stdio.h>
main()
{
	int a[20];
	int n,k,i,c;
	printf("\n enter number =");
	scanf("%d",&n);
	printf("\n enter element=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter k");
	scanf("%d",&k);
	c=1;
	for(i=1;i<n;i++)
	{
		if(c==k)
		{
			printf("kth smalles with  k=%d is %d",k,a[i-1]);
			break;
		}
		if(a[i]!=a[i-1])
		c++;
	}
	scanf("%d",&i);
	return 0;
}
