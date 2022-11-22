#include<stdio.h>
main()
{
	int a[100];
	int i,j,elementcount,count=0;
	printf("\n enter numbers of elements in array=");
	scanf("%d",&elementcount);
	printf("\n enter %d number=",elementcount);
	for(i-0;i<elementcount;i++)
	{
		scanf("%d",&a[100]);
	}
	for(i=0;i<elementcount;i++)
	{
		for(j=0;j<elementcount;j++)
		{
			if(a[i]==a[j])
			count++;
			break;
		}
	}
}


