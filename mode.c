#include<stdio.h>
int mode(int a[],int n)
{
	int maxvalue=0,maxcount=0,i,j,count;
	for(i=0;i<n;i++)
	{
	count=0;
	}
	for(j=0;j<n;j++)
	{
		if(a[j]==a[i])
		count++;
	}
	if(count>maxcount)
	{
		maxcount=count;
		maxvalue=a[i];
	}
return maxvalue;
}
int main()
{
	int n=5;
	int a[]={0,6,7,2,7};
	printf("\n mode=%d",mode(a,n));
	return 0;
}
