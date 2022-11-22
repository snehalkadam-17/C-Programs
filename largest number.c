#include<stdio.h>
main()
{
	int number,reminder,largest=0;
	printf("\n enter the number=");
	scanf("%d",&number);
	while(number>0)
	{
		reminder=number%10;
		if(largest<reminder)
		{
			largest=reminder;
		}
		number=number/10;
	}
	printf("\n the largest digit is =%d\n",largest);
	return 0;
}
