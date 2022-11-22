#include<stdio.h>
int main()
{
	int n,iVar,fvar;
	printf("\n enter an number=");
	scanf("%d",&n);
	fvar=sqrt((double)n);
	iVar=fvar;
	if(iVar==fvar)
	
	printf("%d is a perfect square.",n);
    
	else
	
		printf("%d is not a perfect square.",n);
	
	
	return 0;
}
