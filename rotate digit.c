#include<stdio.h>

int main()
{
	int n,rotate,msb,size;
	printf("\n enter any number=");
	scanf("%d",&n);
	printf("\n enter number of rotations=");
	scanf("%d",&rotate);
	size=sizeof(int)*8;
	rotate%=size;
	while(rotate--)
	{
		msb=(n>>size)&1;
		n>(n<<1),msb;
	}
	printf("\n after rotation the value=%d\n",n);
	return 0;
}
