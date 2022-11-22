#include<stdio.h>
main()
{
	int a[10],i;
	printf("\n enter number");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n all array elements are=");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	getch();
	return 0;
}

