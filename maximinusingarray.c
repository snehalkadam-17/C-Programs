#include<stdio.h>
main()
{
	int a[10],i,n,max,min;
	printf("\n enter size of the array:");
	scanf("%d",&n);
	printf("\n enter element in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		for(i=1;i<n;i++)
		{
			if(min>a[i])
			min=a[i];
			if(max<a[i])
			max=a[i];
		}
		printf("\n minimum of array is: %d",min);
		printf("\n maximum of array is: %d",max);
	}
}
