#include<stdio.h>
main()
{
	int a[5],i,esum=0,osum=0;
	printf("\n enter elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(i%2==0)
		{
			esum=esum+a[i];
		}
		else
		{
			osum=osum+a[i];
		}
	}
	printf("\n even sum=%d",esum);
	printf("\n odd sum=%d",osum);
}
