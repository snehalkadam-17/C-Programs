#include<stdio.h>
main()
{
	int a[100],size,i,sum=0;
	printf("\n enter array size=");
	scanf("%d",&size);
	printf("\n enter array element=");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	sum=sum+a[i];
	printf("\n sum of array=%d\n",sum);
	return 0;
}
