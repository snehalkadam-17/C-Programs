#include<stdio.h>
main()
{
	int n,temp_n,temp_var,sum,power_of_digit,i;
	printf("\n armstrong number between 1 to 999");
	for(i=0;i<=1000;i++)
	{
		temp_n=i;
		while(temp_n>=1)
		{
			temp_var=temp_n%10;
			power_of_digit=temp_var*temp_var*temp_var;
			sum=sum+power_of_digit;
			temp_n=temp_n/10;
		}
		if(sum==i)
		{
			printf("\n entered number %d is a armstrong number",i);
		}
		sum=0;
	}
}
