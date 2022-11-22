#include<stdio.h>
main()
{
	int n,r,msb,size,rotate;
	printf("\n enter number=");
	scanf("%d",&n);
	printf("\n enter number of rotations=");
	scanf("%d",&r);
	size=sizeof(int)*8;
	r%=size;
	while(rotate--);
	{
		msb=(n>>size)&1;
		n=(n<<1)|msb;
	}
	printf("\n after left rotation=%d\n",n);
	return 0;
}
