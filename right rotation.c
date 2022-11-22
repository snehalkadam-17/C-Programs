#include<stdio.h>
int main()
{
	int n,rotate,size,lsb;
	printf("\n enter any number=");
	scanf("%d",&n);
	printf("\n enter number of rotations=");
	scanf("%d",&rotate);
	size=sizeof (int ) * 8;
	rotate%=size;
	while(rotate--)
	{
		lsb=n&1;
		n=(n>>1)&(~(1<<size));
		n=n|(lsb<<size);
	}
	printf("\n after right rotation the value is=%d\n",n);
	return 0;
}
